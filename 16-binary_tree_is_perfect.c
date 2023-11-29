#include "binary_trees.h"

/**
 * binary_tree_is_perfect - Check if a binary tree is perfect
 * @tree: Binary tree
 * Return: 1 if it is perfect, 0 if not
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int depth = 0, level = 0;

	if (!tree)
		return (0);

	while (tree)
	{
		depth++;
		tree = tree->left;
	}

	tree = binary_tree_is_perfect_helper(tree, depth, &level);

	return (tree != NULL);
}

/**
 * binary_tree_is_perfect_helper - Helper function for recursive check
 * @tree: Binary tree
 * @depth: Depth of the leftmost side
 * @level: Depth of a chain
 * Return: NULL if not perfect, otherwise, a pointer to the last checked node
 */
const binary_tree_t *binary_tree_is_perfect_helper(
	const binary_tree_t *tree, int depth, int *level)
{
	const binary_tree_t *left, *right;

	if (!tree)
		return (NULL);

	if (!tree->left && !tree->right)
	{
		if (depth == (*level + 1))
			return (tree);
		return (NULL);
	}

	if (!tree->left || !tree->right)
		return (NULL);

	left = binary_tree_is_perfect_helper(tree->left, depth, level + 1);
	right = binary_tree_is_perfect_helper(tree->right, depth, level + 1);

	if (left && right)
		return (right);

	return (NULL);
}
