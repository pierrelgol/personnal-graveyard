#include "ft_list.h"

int ft_list_size(t_list *begin_list)
{
	t_list *elem;
	int		size;

	elem = begin_list;
	size = 0;

	while(elem != NULL)
	{
		elem = elem->next;
		++size;
	}

	return (size);
}
