#include "binary_trees.h"

/**
* binary_tree_balance - function that measures the balance of a binary tree
* @tree: root node.
* Return: Balance nodes.
*/

int binary_tree_balance(const binary_tree_t *tree)
{
	int h_left, h_right;

	if (!tree)
		return (0);
	h_left = tree->left ? 1 + binary_tree_balance(tree->left) : 0;
	h_right = tree->right ? 1 + binary_tree_balance(tree->right) : 0;
	return (h_left - h_right);
}
