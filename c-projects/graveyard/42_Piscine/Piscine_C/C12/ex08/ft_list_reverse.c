#include "ft_list.h"

t_list *ft_list_rev(t_list *current, t_list *next)
{
	if(next == NULL)
		return (current);
	else
	{
		ft_list_rev(next, next->next);
		next->next = current;
		return (current);
	}
}

void ft_list_reverse(t_list **begin_list)
{
	*begin_list = ft_list_rev(NULL,*begin_list);
}

