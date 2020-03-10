#include "binary_trees.h"

/**
* binary_tree_is_leaf - function that checks if a node is a leaf.
* @node: node to check
* Return: 1  if node is a leaf, otherwise 0.
*/

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);
	return (!node->left && !node->right);
}
