#include "ft_btree.h"

int 	btree_level_count(t_btree *root)
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

void	btree_apply_at_lvl(t_btree *root, int level, 
		void (*applyf)(void *item, int current_level, int is_first_elem))
{
	if (root == NULL)
		return ;
	if (level == 1)
		applyf(root->item, level, 1);
	else if (level > 1)
	{
		btree_apply_at_lvl(root->left, level - 1, applyf);
		btree_apply_at_lvl(root->right, level - 1, applyf);
	}
}

void	btree_apply_by_level(t_btree *root, 
		void (*applyf)(void *item, int current_level, int is_first_elem))
{
	int current_depth;
	int max_depth;

	if (root != NULL)
	{
		max_depth = btree_level_count(root);
		current_depth = 1;
		while (current_depth < max_depth)
			btree_apply_at_lvl(root, current_depth++, applyf);
	}
}