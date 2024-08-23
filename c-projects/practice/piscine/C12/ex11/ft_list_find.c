#include "ft_list.h"

t_list *ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)(void *, void *))
{
	if(begin_list == NULL)
		return (NULL);
	else if (cmp(begin_list->data, data_ref) == 0)
		return (begin_list);
	else
		return (ft_list_find(begin_list->next, data_ref, cmp));
}
