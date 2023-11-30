#include "binary_trees.h"

/**
 * nd_nb - This function count num fo nodes
 * @tree: Tree
 * Return: Nb of nodes
 */

int nd_nb(const binary_tree_t *tree)
{
return (tree ? 1 + nd_nb(tree->left) + nd_nb(tree->right) : 0);
}

/**
 * t_cmlt - This Function Check if the tree is complete.
 * @tree: Tree
 * @index: Index
 * @n: nb of nodes
 * Return: 1 on success, 0 on failure.
 */

int t_cmlt(const binary_tree_t *tree, int index, int n)
{
return (!tree || (index < n && t_cmlt(tree->left, 2 * index + 1, n)
	&& t_cmlt(tree->right, 2 * index + 2, n)));
}

/**
 * binary_tree_is_complete - This function
 * @tree: Binary tree node.
 * Return: 1 on success, 0 on failure.
 */

int binary_tree_is_complete(const binary_tree_t *tree)
{
	return (tree && t_cmlt(tree, 0, nd_nb(tree)));
}
