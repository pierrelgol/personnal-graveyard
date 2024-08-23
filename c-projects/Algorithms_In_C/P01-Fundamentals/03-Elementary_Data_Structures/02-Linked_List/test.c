#include "list.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

static int alloc_count = 0;
static int dealloc_count = 0;
void       list_print(t_list *list)
{
	if (!list)
	{
		puts("");
		return;
	}
	if (!list->next)
		printf("[%d]", *((int *) list->data));
	else
	{
		printf("[%d]->", *((int *) list->data));
		list_print(list->next);
	}
}

void list_dealloc(void *obj)
{
	dealloc_count++;
	free(obj);
}

void *list_alloc(size_t size)
{
	alloc_count++;
	return (malloc(size));
}

int list_compare(void *elem1, void *elem2)
{
	int n1;
	int n2;

	n1 = *((int *) elem1);
	n2 = *((int *) elem2);
	return (n1 - n2);
}

void *list_fill(void)
{
	static int values[32] = {1,  2,  3,  4,  5,  6,  7,  8,  9,  10, 11,
	                         12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22,
	                         23, 24, 25, 26, 27, 28, 29, 30, 31, 32};
	static int index;

	return (&values[index++ % 32]);
}

t_list *list_new_list(int size, t_handler *handler)
{
	t_list *new_list;
	t_list *new_node;
	int     count;

	if (size == 0)
		return (NULL);
	count = 1;
	new_list = list_create(handler);
	new_node = new_list;
	while (count < size)
	{
		new_node->next = list_create(handler);
		new_node = new_node->next;
		++count;
	}
	return (new_list);
}

void list_free(t_list **list, t_handler *handler)
{
	t_list *curr;
	t_list *temp;

	if (!*list)
		return;

	curr = (*list);
	while (curr)
	{
		temp = curr;
		curr = curr->next;
		handler->destroy(temp);
	}
}

int main(void)
{
	t_handler handler;
	t_list   *list;
	int       cmd;
	int       size;
	int       index;

	handler.compare = list_compare;
	handler.create = list_alloc;
	handler.destroy = list_dealloc;
	handler.fill = list_fill;
	while (scanf("%c", (char *) &cmd) != EOF)
	{
		switch (cmd)
		{
			case 'c':
			{
				puts("Enter the size of you new list");
				scanf("%d", &size);
				list = list_new_list(size, &handler);
				puts("The list was successfuly created");
				list_print(list);
			} break;

			case 'a':
			{
				list_append(&list, list_create(&handler), &handler);
				list_print(list);
			} break;
			case 'p':
			{
				list_prepend(&list, list_create(&handler), &handler);
				list_print(list);
			}break;

			case 'd':
			{
				puts("What index do you wish to delete?\n");
				scanf("%d", &index);
				list_delete(&list, index, &handler);
				list_print(list);
			} break;
		}
	}
	return (0);
}
