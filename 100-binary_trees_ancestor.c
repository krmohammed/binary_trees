#include "binary_trees.h"

/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes
 * @first: pointer first node
 * @second: pointer to second node
 *
 * Return: pointer to lowest common ancestor
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
	binary_tree_t *ptr, *tmp;

	if (first == NULL || second == NULL)
		return (NULL);

	ptr = (binary_tree_t *)second;
	while (ptr)
	{
		tmp = (binary_tree_t *)first;
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
