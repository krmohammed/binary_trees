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
	binary_tree_t *ptr;

	if (first == NULL || second == NULL)
		return (NULL);

	ptr = (binary_tree_t *)second;
	while (ptr)
	{
		if (first->parent == ptr || first == ptr)
			return (ptr);
		ptr = ptr->parent;
	}

	ptr = (binary_tree_t *)first;
	while (ptr)
	{
		if (second->parent == ptr || second == ptr)
			return (ptr);
		ptr = ptr->parent;
	}

	return (NULL);
}
