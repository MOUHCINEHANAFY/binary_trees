#include "binary_trees.h"

/**
 * binary_tree_sibling - This function find the sibling of a node
 * @node: node
 * Return: Pointer to sibling else non
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);
	if (node->n < node->parent->n)
		return (node->parent->right);
	return (node->parent->left);
}
