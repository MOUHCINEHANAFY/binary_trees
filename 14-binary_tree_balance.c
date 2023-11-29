#include "binary_trees.h"

/**
 * binary_tree_height - This function get height of binary tree
 * @tree: binary tree
 * Return: height of the tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_Size = 0, right_Size = 0;

	if (!tree)
		return (0);
	else if (tree->right || tree->left)
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
 * binary_tree_balance - This function checks the balance of a tree
 * @tree: binary tree
 * Return: size of tree
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int right_Height = 0, left_Height = 0;

	if (!tree)
		return (0);
	if (tree->left)
		left_Height = binary_tree_height(tree->left) + 1;
	if (tree->right)
		right_Height = binary_tree_height(tree->right) + 1;
	return (left_Height - right_Height);
}
