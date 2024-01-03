#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: pointer to the root node of the tree
 *
 * Return: size of tree, 0 if tree is NULL
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (tree == NULL)
		return (0);

	size += tree->right ? binary_tree_size(tree->right) : 0;
	size += 1;
	size += tree->left ? binary_tree_size(tree->left) : 0;

	return (size);
}
