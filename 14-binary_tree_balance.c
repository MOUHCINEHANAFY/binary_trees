#include "binary_trees.h"

/**
 * binary_tree_balance - This function check the balance of a binary tree
 * @tree: Binary tree
 * Return: balance of the tree
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
