#include "binary_trees.h"

/**
* height - function that measures the height of a binary tree.
* @tree: node parent
* Return: none
*/

size_t height(const binary_tree_t *tree)
{
	size_t h_left, h_right;

	if (!tree)
		return (0);
	h_left = tree->left ? 1 + height(tree->left) : 0;
	h_right = tree->right ? 1 + height(tree->right) : 0;
	return (h_left - h_right);
}

/**
* binary_tree_balance - function that measures the balance of a binary tree
* @tree: root node.
* Return: Balance nodes.
*/

int binary_tree_balance(const binary_tree_t *tree)
{
	return (height(tree));
}
