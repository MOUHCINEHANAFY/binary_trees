#include "binary_trees.h"

/**
 *  * binary_tree_rotate_left - This function rotates t
 * @tree: Tree
 * Return: new root
 */

binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *a, *b;

	if (!tree || !tree->right)
		return (NULL);

	b = tree;
	a = b->right;

	b->right = a->left;
	if (a->left)
		a->left->parent = b;

	a->parent = b->parent;
	if (!b->parent)
		tree = a;
	else if (b == b->parent->left)
		b->parent->left = a;
	else
		b->parent->right = a;

	a->left = b;
	b->parent = a;
return (tree);
}
