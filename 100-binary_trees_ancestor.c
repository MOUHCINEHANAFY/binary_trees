#include "binary_trees.h"

/**
 * binary_trees_ancestor - This function check of first ancestor
 * @f: First node
 * @s: Second node
 * Return: pointer to the commen ancestor
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *f, const binary_tree_t *s)
{
	const binary_tree_t *tmp;

	if (!f || !s || (!s->parent && !f->parent))
		return (NULL);

	while (f)
	{
		tmp = s;
		while (tmp)
		{
			if (tmp->n == f->n)
				return ((binary_tree_t *)tmp);
			tmp = tmp->parent;
		}
		f = f->parent;
	}
	return (NULL);
}
