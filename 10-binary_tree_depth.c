#include "binary_trees.h"

/**
 * binary_tree_depth - This function check the depth of a tree
 * @tree: Tree to check
 * Return: Depth of tree
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t tmp;

	if (!tree)
		return (0);

	if (tree->parent)
	{
		tmp = binary_tree_depth(tree->parent);
		return (tmp + 1);
	}

return (0);
}
