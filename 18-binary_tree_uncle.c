#include "binary_trees.h"

/**
 * tree_sibling - This function find sibling
 * @node: node
 * Return: Pointer
 */

binary_tree_t *tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);
	if (node->n < node->parent->n)
		return (node->parent->right);
	return (node->parent->left);
}

/**
 * binary_tree_uncle - This function find the uncle of node
 * @node: node to check its uncle
 * Return: returns the uncle adress
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);
	return (tree_sibling(node->parent));
}
