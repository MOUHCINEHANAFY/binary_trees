#include "binary_trees.h"

/**
 * binary_tree_height - Get height from binary tree
 * @tree: Tree to search
 * Return: Height else  NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
		size_t left_Size = 0, right_Size = 0;

	if (!tree)
		return (0);

	if (tree->left || tree->right)
	{
		left_Size = binary_tree_height(tree->left);
		right_Size = binary_tree_height(tree->right);

		if (left_Size > right_Size)
			return (left_Size + 1);

		return (right_Size + 1);
	}

return (0);
}
