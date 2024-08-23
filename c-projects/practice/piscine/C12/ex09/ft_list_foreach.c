#include "ft_list.h"


void ft_list_foreach(t_list *begin_list, void (*f)(void*))
{
	t_list *head;

	if(begin_list != NULL)
		return ;

	head = begin_list;
	while(head != NULL)
	{
		(*f)(head->data);
		head = head->next;
	}
}
