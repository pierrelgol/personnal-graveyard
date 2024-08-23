#include "ft_btree.h"

t_btree *btree_create_node(void *item)
{
	t_btree *new_node;

	new_node = (t_btree*) malloc(sizeof(t_btree));
	if(new_node != NULL)
	{
		new_node->left = NULL;
		new_node->right = NULL;
		new_node->item = item;
		
		return (new_node);
	}

	return (NULL);
}

