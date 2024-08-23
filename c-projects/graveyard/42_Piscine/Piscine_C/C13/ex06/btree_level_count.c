#include "ft_btree.h"

int btree_level_count(t_btree *root)
{
	int ldepth;
	int rdepth;
	
	if(root == NULL)
		return (0);
	ldepth = btree_level_count(root->left);
	rdepth = btree_level_count(root->right);

	if(ldepth > rdepth)
		return (ldepth + 1);
	else
		return (rdepth + 1);
}
