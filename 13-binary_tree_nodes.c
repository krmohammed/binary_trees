#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least one child
 * @tree: pointer to the root node of the tree
 *
 * Return: number of non-leave nodes, 0 if tree is NULL
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (tree == NULL)
		return (0);

	nodes += binary_tree_nodes(tree->left);
	if (tree->left || tree->right)
		nodes += 1;
	nodes += binary_tree_nodes(tree->right);

	return (nodes);
}
