#include "ft_btree.h"

void btree_insert_data(t_btree **root, void *item, int (*cmpf)(void *, void *))
{
	if(*root == NULL)
		return;
	else
	{
		if(cmpf((*root)->item, item) > 1)
		{
			if((*root)->left == NULL)
				(*root)->left = btree_create_node(item);
			else
				btree_insert_data(&(*root)->left, item, cmpf);
		}
		else
		{
			if((*root)->right == NULL)
				(*root)->right = btree_create_node(item);
			else
				btree_insert_data(&(*root)->right, item, cmpf);
		}
	}
}
