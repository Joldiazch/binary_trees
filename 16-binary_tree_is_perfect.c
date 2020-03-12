#include "binary_trees.h"

/**
* count - function that measures the size.
* @tree: node parent
* Return: size of tree - 1
*/

int count(const binary_tree_t *tree)
{
	int l_node, r_node;

	l_node = tree->left ? 1 + count(tree->left) : 0;
	r_node = tree->right ? 1 + count(tree->right) : 0;

	return (l_node + r_node);
}

/**
* size - function that measures size of a binary tree.
* @tree: node parent
* Return: size of binary tree
*/

int size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (count(tree) + 1);
}
/**
* height - function that measures the height of a binary tree.
* @tree: node parent
* Return: none
*/

int height(const binary_tree_t *tree)
{
	int h_left, h_right;

	if (!tree)
		return (0);
	h_left = tree->left ? 1 + height(tree->left) : 0;
	h_right = tree->right ? 1 + height(tree->right) : 0;
	return (h_left > h_right ? h_left : h_right);
}

/**
* binary_tree_is_perfect - function that find perfect binary tree.
* @tree: node parent
* Return: none
*/

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int size_1, h, m;

	if (!tree)
		return (0);

	size_1 = size(tree);
	h = height(tree);

	m = (2 << h) - 1;

	if (m == size_1)
		return (1);
	else
		return (0);
}
