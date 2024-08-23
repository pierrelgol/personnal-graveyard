#include "ft_list.h"

int cmp(void *dt1, void *dt2);

void ft_list_sort(t_list **begin_list, int (*cmp)(void *, void *))
{
	t_list *current_node;
	t_list *next_node;
	void *temp;

	current_node = *begin_list;
	if(begin_list != NULL)
	{
		while(current_node != NULL)
		{
			next_node = current_node->next;
			while((*cmp)(current_node->data, next_node->data) > 1 && next_node != NULL)
				next_node = next_node->next;
			if(next_node != NULL)
			{
				temp = next_node->data;
				next_node->data = current_node->data;
				current_node->data = temp;
			}
			current_node = current_node->next;
		}
	}
}
