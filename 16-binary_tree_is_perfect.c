#include "binary_trees.h"

/**
 * is_tree_perfect - Thus function counts the leaves in a binary tree
 * @tree: Binary tree
 * @depth: depth of left most side
 * @level: depth of a chain
 * Return: 1 if it is perfect 0 if not
 */

int is_tree_perfect(const binary_tree_t *tree, int depth, int level)
{
	if (!tree)
		return (1);
	if (!tree->right && !tree->left)
	{
		if (depth == (level + 1))
			return (1);
		return (0);
	}
	if (!tree->left || !tree->right)
		return (0);
	return (is_tree_perfect(tree->right, depth, level + 1) &&
		is_tree_perfect(tree->left, depth, level + 1));
}

/**
 * get_tree_depth - This function gets depth of left side
 * @tree: binary tree
 * Return: depth of tree
 */

int get_tree_depth(const binary_tree_t *tree)
{
	int tmp = 0;

	while (tree)
	{
		tmp++;
		tree = tree->left;
	}
	return (tmp);
}


/**
 * binary_tree_is_perfect - This function check if binary tree is full
 * @tree: binary tree
 * Return: 1 if full 0 if not
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int final_depth;

	final_depth = get_tree_depth(tree);

	if (!tree)
		return (0);
	return (is_tree_perfect(tree, final_depth, 0));
}
