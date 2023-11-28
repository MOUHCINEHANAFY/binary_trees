#include "binary_trees.h"

/**
 * binary_tree_postorder - function free postorder
 * @tree: binary tree
 * @func: func
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
if (func && tree)
{
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
}
