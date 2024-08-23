#include "ft_list.h"


t_list *ft_find_new_head(t_list **begin_list, void *data_ref,
	 int (*cmp)(void *, void *), void (*free_fct)(void *))
{
	t_list *new_head;
	t_list *to_free;

	new_head = *begin_list;
	while(new_head != NULL && (*cmp)(new_head->data, data_ref) == 0)
	{
		to_free = new_head;
		new_head = new_head->next;
		free_fct(to_free->data);
		free_fct(to_free);
	}

	return (new_head);
}


void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)(void *, void *), void (*free_fct)(void *))
{
	t_list *new_head;
	t_list *temp;

	new_head = ft_find_new_head(begin_list, data_ref, (*cmp), (*free_fct));
	*begin_list = new_head;
	temp = NULL;
	while(new_head != NULL)
	{
		if((*cmp)(new_head->data, data_ref) == 0)
		{
			temp = new_head;
			new_head = new_head->next;
			free_fct(temp->data);
			free_fct(temp);
		}
		else
			new_head = new_head->next;
	}
}
