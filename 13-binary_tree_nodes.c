#include "binary_trees.h"

/**
 * binary_tree_nodes - This function count the number of nodes in a binary tree
 * @tree: Binary tree
 * Return: Number of nodes in the tree
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t left_Size = 0, right_Size = 0;

	if (!tree)
		return (0);

	if (tree->left || tree->right)
	{
		left_Size = binary_tree_nodes(tree->left);
		right_Size = binary_tree_nodes(tree->right);
		return (1 + left_Size + right_Size);
	}

	return (0);
}
