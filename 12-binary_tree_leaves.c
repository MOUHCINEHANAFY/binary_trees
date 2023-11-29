#include "binary_trees.h"

/**
 * binary_tree_leaves - This function count the leaves in a binary tree
 * @tree: Binary tree
 * Return: Number of leaves in the Tree
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left_Size = 0, right_Size = 0;

	if (!tree)
		return (0);

	if (tree->left || tree->right)
	{
		left_Size = binary_tree_leaves(tree->left);
		right_Size = binary_tree_leaves(tree->right);
		return (left_Size + right_Size);
	}

	return (1);
}
