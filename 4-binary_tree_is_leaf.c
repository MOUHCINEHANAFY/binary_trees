#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Function to check if node is a leaf
 * @node: node 
 * Return: 1 if true else 0
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL || node->right != NULL || node->left != NULL)
		return (0);

	return (1);
}
