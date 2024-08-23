#include "list.h"

t_list *list_create(t_handler *interface)
{
	t_list *new_node;

	new_node = interface->create(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->data = interface->fill();
	new_node->next = NULL;
	return (new_node);
}

void list_append(t_list **list, t_list *new_node, t_handler *interface)
{
	(void) interface;

	if (!*list)
	{
		*list = new_node;
		return;
	}

	t_list *current = *list;
	while (current->next)
	{
		current = current->next;
	}
	current->next = new_node;
	new_node->next = NULL;
}

void list_prepend(t_list **list, t_list *new_node, t_handler *interface)
{
	(void) interface;
	if (!*list)
		(*list) = new_node;
	new_node->next = (*list);
	(*list) = new_node;
}

void	list_delete(t_list **list, int index, t_handler *interface)
{
	t_list *temp;
	t_list *curr;
	int	count;

	if (!list || !(*list))
		return;
	else if (index == 0)
	{
		temp = (*list);
		(*list) = (*list)->next;
		interface->destroy(temp);
		return;
	}
	curr = (*list);
	count = 0;
	while (curr->next->next && count < index)
	{
		curr = curr->next;
		++count;
	}
	if (!curr->next)
		return;
	temp = curr->next;
	curr->next = curr->next->next;
	interface->destroy(temp);
}

t_list *list_search(t_list **list, void *data, t_handler *interface)
{
	t_list *curr;

	if (!*list)
		return (NULL);
	curr = (*list);
	while (curr)
	{
		if (interface->compare(curr->data, data) == 0)
			return (curr);
		curr = curr->next;
	}
	return (NULL);
}
