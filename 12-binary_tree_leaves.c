#include "binary_trees.h"

/**
* is_leaf - function that checks if a node is a leaf.
* @node: node to check
* Return: 1  if node is a leaf, otherwise 0.
*/

int is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);
	return (!node->left && !node->right);
}

/**
* binary_tree_leaves - function that counts the nodes with leaf.
* @tree: node parent
* Return: sum of leaves
*/

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (is_leaf(tree))
		return (1);

	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
