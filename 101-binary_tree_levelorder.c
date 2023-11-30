#include "binary_trees.h"

/**
 * tree_hight_b - This function get hight
 * @tree: tree
 * Return: height of tree
 */

int tree_hight_b(const b_t_t *tree)
{
	int left_Size = 0, right_Size = 0;

	if (!tree)
		return (0);
	else if (tree->left || tree->right)
	{
		left_Size = tree_hight_b(tree->left);
		right_Size = tree_hight_b(tree->right);
		if (left_Size > right_Size)
			return (left_Size + 1);
		return (right_Size + 1);
	}
	else
		return (0);
}
/**
 * put_lvl - put lvl
 * @tree: tree
 * @func: function
 * @level: level
 */

void put_lvl(const b_t_t *tree, void (*func)(int), int level)
{
	if (!tree)
		return;
	if (level == 1)
		func(tree->n);
	else
	{
		put_lvl(tree->left, func, level - 1);
		put_lvl(tree->right, func, level - 1);
	}
}

/**
 * binary_tree_levelorder - lvl lorder function
 * @tree: binary tree
 * @func: fct
 */
void binary_tree_levelorder(const b_t_t *tree, void (*func)(int))
{
	int lvl = 0, height;

	if (!tree || !func)
		return;
	height = tree_hight_b(tree);
	while (lvl <= height)
		put_lvl(tree, func, ++lvl);
}
