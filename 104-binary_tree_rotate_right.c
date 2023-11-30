#include "binary_trees.h"

/**
 * binary_tree_rotate_right - This function rotates
 * @tree: Tree
 * Return: new root
 */

binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *a, *b;

	if (!tree || !tree->left)
		return (NULL);

	b = tree;
	a = b->left;

	b->left = a->right;
	if (a->right)
	a->right->parent = b;

	a->parent = b->parent;
	if (!b->parent)
		tree = a;
	else if (b == b->parent->right)
		b->parent->right = a;
	else
		b->parent->left = a;

	a->right = b;
	b->parent = a;
return (tree);
}
