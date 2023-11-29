#include "binary_trees.h"

/**
 * is_tree_full - This function checks if tree is full
 * @tree: Binary tree
 * Return: 1 if true 0 if not
 */

int is_tree_full(const binary_tree_t *tree)
{
	if (!tree)
		return (1);
	if (!tree->right && !tree->left)
		return (1);
	if (tree->right && tree->left)
		return (is_tree_full(tree->right) && is_tree_full(tree->left));
	return (0);

}

/**
 * binary_tree_is_full - This Function check if binary tree is full
 * @tree: Binary tree
 * Return: 1 if True 0 if not
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (is_tree_full(tree));
}
