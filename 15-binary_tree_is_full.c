#include "binary_trees.h"

/**
* count - function that measures the height of a binary tree.
* @tree: node parent
* Return: none
*/

int count(const binary_tree_t *tree)
{
	int l_node, r_node;

	if (!tree)
		return (0);

	l_node = tree->left ? count(tree->left) : 1;
	r_node = tree->right ? count(tree->right) : 1;

	return (l_node + r_node + 1);
}

/**
* binary_tree_is_full - function that measures the height of a binary tree.
* @tree: node parent
* Return: none
*/

int binary_tree_is_full(const binary_tree_t *tree)
{
	int l_node, r_node;

	if (!tree)
		return (0);

	l_node = tree->left ? count(tree->left) : 1;
	r_node = tree->right ? count(tree->right) : 1;

	if (l_node == r_node)
		return (1);
	else
		return (0);
}
