#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node to the right of a binary tree
 * @parent: Parent of the node to be inserted
 * @value: Value of the new node
 * Return: Pointer to the new node, else NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (!parent)
	{			
		return (NULL);
	}
        new_node = binary_tree_node(parent, value);
	if (!new_node)
	{
		return (NULL);
	}
	if (parent->right)
        {
		new_node->right = parent->right;
		parent->right->parent = new_node
	}

	parent->right = new_node;
return (new_node);
}
