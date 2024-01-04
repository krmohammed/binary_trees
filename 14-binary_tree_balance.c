#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 *
 * Return: 0 if tree is NULL, height of tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height, right_h, left_h;

	if (tree == NULL)
		return (0);

	right_h = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	left_h = tree->left ? 1 + binary_tree_height(tree->left) : 0;

	height = right_h > left_h ? right_h : left_h;

	return (height);
}



/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree
 *
 * Return: balance factor, 0 if tree is NULL
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int factor, right_h, left_h;

	if (tree == NULL)
		return (0);

	right_h = binary_tree_height(tree->right);
	left_h = binary_tree_height(tree->left);

	factor = left_h - right_h;
	
	return (factor);
}
