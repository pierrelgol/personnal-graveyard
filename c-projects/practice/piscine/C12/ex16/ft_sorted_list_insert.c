#include "ft_list.h"

int cmp(void *dt1, void *dt2);
void free_fct(void *dt);


void 	ft_sorted_list_insert(t_list **begin_list, void *data, int (*cmp)(void *, void *))
{
	t_list *previous;
	t_list *current;
	t_list *insert;
	int is_head;

	is_head = 1;
	current = *begin_list;
	insert = ft_create_elem(data);
	if(insert != NULL && begin_list != NULL)
	{
		while(current != NULL)
		{
			if (cmp(current->data, data) > 1)
			{
				if(is_head == 1)
				{
					insert->next = *begin_list;
					*begin_list = insert;
					is_head = 0;
				}
				else
				{
					insert->next = current;
					previous->next = insert;
				}
			}
			previous = current;
			current = current->next;
		}
	}

}
