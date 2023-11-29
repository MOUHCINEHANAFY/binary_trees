#include "binary_trees.h"

/**
 * tree_level - Thins function put one level at a time
 * @tree: tree
 * @func: function to put tree lvl
 * @level: level
 */

void tree_level(const b_t_t *tree, void (*func)(int), int level)
{
	if (!tree)
		return;
	if (level == 1)
		func(tree->n);
	else
	{
		tree_level(tree->left, func, level - 1);
		tree_level(tree->right, func, level - 1);
	}
}

/**
 * binary_tree_height - Function to get height from binary tree
 * @tree: tree
 * Return: height
 */

int binary_tree_height(const b_t_t *tree)
{
	int left_Size = 0, right_Size = 0;

	if (!tree)
		return (0);
	else if (tree->left || tree->right)
	{
		left_Size = binary_tree_height(tree->left);
		right_Size = binary_tree_height(tree->right);
		if (left_Size > right_Size)
			return (left_Size + 1);
		return (right_Size + 1);
	}
	else
		return (0);
}

/**
 * binary_tree_levelorder - Function of levelorder traversal
 * @tree: binary tree
 * @func: function
 */

void binary_tree_levelorder(const b_t_t *tree, void (*func)(int))
{
	int lvl = 0, height;

	if (!tree || !func)
		return;
	height = binary_tree_height(tree);
	while (lvl <= height)
		tree_level(tree, func, ++lvl);
}
