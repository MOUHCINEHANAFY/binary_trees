#include "binary_trees.h"

/**
 * binary_tree_is_root - function to check if node is the root
 * @node: node to be checked
 * Return: 1 if root else 0
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node && !node->parent)
		return (1);
	return (0);
}
