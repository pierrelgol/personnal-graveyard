#ifndef LIST_H
#define LIST_H

#include <stddef.h>
#include <stdlib.h>

typedef int (*comparator)(void *, void *);
typedef void *(*allocator)(size_t);
typedef void (*deallocator)(void *) ;
typedef void *(*filler)(void) ;

typedef struct	s_handler
{
	comparator	compare;
	allocator	create;
	deallocator	destroy;
	filler		fill;
}		t_handler;


typedef struct	s_node
{
	struct s_node	*next;
	void		*data;
}		t_list;

t_list	*
list_create(t_handler *interface);

void
list_append(t_list **list, t_list *new_node, t_handler *interface);

void
list_prepend(t_list **list, t_list *new_node, t_handler *interface);

void
list_delete(t_list **list, int index, t_handler *interface);

t_list	*
list_search(t_list **list, void *data, t_handler *interface);

#endif
