#include "binary_trees.h"

/**
 * node_insert - Insert a new binary tree node
 * @value: Value for n in the new node
 * Return: Pointer to the new node, or NULL on failure
 */

binary_tree_t *node_insert(int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	if (!new_node)
		return (NULL);

	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;
	return (new_node);
}

/**
 * binary_tree_insert_left - Inserts a node to the left of a binary tree
 * @parent: Inserted node parent
 * @value: Value for n in the new node
 * Return: Pointer to the new node, or NULL on failure
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (!parent)
		return (NULL);

	new_node = node_insert(value);
	if (!new_node)
		return (NULL);

	new_node->parent = parent;
	new_node->left = parent->left;
	parent->left = new_node;
	return (new_node);
}
