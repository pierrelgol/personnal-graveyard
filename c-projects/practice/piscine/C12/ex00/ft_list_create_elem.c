#include "ft_list.h"

t_list *ft_create_elem(void *data)
{
	t_list *new_elem;

	new_elem = (t_list*) malloc(sizeof(t_list));
	if (new_elem == NULL)
	{
		return (NULL);
	}
	else
	{
		new_elem->next = NULL;
		new_elem->data = data;
	}

	return (new_elem);
}
