#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if a given is a root
 * @node: pointer to the node to be checked
 *
 * Return: 1 if node is a root, 0 otherwise
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent)
		return (0);

	return (1);
}
