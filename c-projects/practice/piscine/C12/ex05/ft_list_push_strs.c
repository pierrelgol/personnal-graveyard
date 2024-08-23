#include "ft_list.h"

void ft_list_push_front_local(t_list **begin_list, void *data)
{
	t_list *elem;

	elem = ft_create_elem(data);
	if(elem != NULL && *begin_list != NULL)
		elem->next = *begin_list;

	*begin_list = elem;
}

t_list *ft_list_push_strs(int size, char **strs)
{
	t_list *list_head;
	int 	index;

	list_head = NULL;
	index = 0;
	while(index < size)
		ft_list_push_front_local(&list_head, strs[index++]);

	return (list_head);
}