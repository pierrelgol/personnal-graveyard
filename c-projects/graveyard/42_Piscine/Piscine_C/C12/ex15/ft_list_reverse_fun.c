#include "ft_list.h"


t_list *ft_list_rev_fun(t_list *current, t_list *next)
{
	if(next == NULL)
		return (current);

	ft_list_rev_fun(next, next->next);
	next->next = current;

	return (current);
}

void ft_list_reverse_fun(t_list *begin_list)
{
	if(begin_list != NULL)
	{
		begin_list = ft_list_rev_fun(NULL,begin_list);
	}
}


