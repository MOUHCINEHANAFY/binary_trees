#include "binary_trees.h"

/**
 * binary_tree_preorder - function to check if func use preorder
 * @tree: binary tree
 * @func: function
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!func || !tree)
		return;
	func(tree->n);
	binary_tree_preorder(tree->right, func);
	binary_tree_preorder(tree->left, func);
}
