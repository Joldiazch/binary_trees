#include "binary_trees.h"

/**
* binary_tree_nodes - counts nodes with at least 1 child in a binary tree.
* @tree: root node.
* Return: sum nodes with at least 1 child in a binary tree.
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (!tree->left && !tree->right) /*is leaf*/
		return (0);

	if ((!tree->left && tree->right) || (tree->left && !tree->right))
		return (1);

	return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right) + 1);
}
