#include "binary_trees.h"

/**
 * binary_tree_height - This function check height from binary tree
 * @tree: Tree
 * Return: Height of the tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_Size = 0, right_Size = 0;

	if (!tree)
		return (0);

	if (tree->right || tree->left)
	{
		left_Size = binary_tree_height(tree->left);
		right_Size = binary_tree_height(tree->right);

		if (left_Size > right_Size)
			return (left_Size + 1);

		return (right_Size + 1);
	}

	return (0);
}

/**
 * binary_tree_balance - This function check the balance of a binary tree
 * @tree: Binary tree
 * Return: Balance factor of the tree
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int right_Height = 0, right_Height = 0;

	if (!tree)
		return (0);

	if (tree->left)
		right_Height = binary_tree_height(tree->left) + 1;
	if (tree->right)
		right_Height = binary_tree_height(tree->right) + 1;

	return (right_Height - right_Height);
}
