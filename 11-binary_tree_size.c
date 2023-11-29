#include "binary_trees.h"

/**
 * binary_tree_size - This function calculate the size of a binary tree
 * @tree: Tree
 * Return: Size of the tree
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left_Size = 0, right_Size = 0;

	if (!tree)
	{
		return (0);
	}
	left_Size = binary_tree_size(tree->left);
	right_Size = binary_tree_size(tree->right);

	return (1 + left_Size + right_Size);
}
