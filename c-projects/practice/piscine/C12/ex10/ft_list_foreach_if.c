#include "ft_list.h"

void ft_list_foreach_if(t_list *begin_list, void (*f)(void *), void *data_ref, int (*cmp)(void *, void *))
{
	if(begin_list == NULL)
		return;
	if(cmp(begin_list->data, data_ref))
		(*f)(begin_list->data);
	ft_list_foreach_if(begin_list, f, data_ref, cmp);
}

