#include "binary_trees.h"

/**
* count - function that measures the size.
* @tree: node parent
* Return: size of tree - 1
*/

size_t count(const binary_tree_t *tree)
{
	size_t l_node, r_node;

	l_node = tree->left ? 1 + count(tree->left) : 0;
	r_node = tree->right ? 1 + count(tree->right) : 0;

	return (l_node + r_node);
}

/**
* binary_tree_size - function that measures size of a binary tree.
* @tree: node parent
* Return: size of binary tree
*/

size_t binary_tree_size(const binary_tree_t *tree)
{

	if (!tree)
		return (0);
	return (count(tree) + 1);
}
