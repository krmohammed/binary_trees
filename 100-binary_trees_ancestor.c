#include "binary_trees.h"

/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes
 * @fir: pointer first node
 * @sec: pointer to second node
 *
 * Return: pointer to lowest common ancestor
 */

binary_tree_t *binary_trees_ancestor(binary_tree_t *fir, binary_tree_t *sec)
{
	binary_tree_t *ptr, *tmp;

	if (fir == NULL || sec == NULL)
		return (NULL);

	ptr = sec;
	while (ptr)
	{
		tmp = fir;
		while (tmp)
		{
			if (ptr == tmp)
				return (ptr);
			tmp = tmp->parent;
		}
		ptr = ptr->parent;
	}

	return (NULL);
}
