#include "ft_list.h"

t_list *ft_list_at(t_list *begin_list, unsigned int nbr)
{
	if(nbr == 0)
		return (begin_list);
	else if (begin_list == NULL)
		return (NULL);
	else
		return (ft_list_at(begin_list->next, (nbr - 1)));
}
