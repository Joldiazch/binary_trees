#include "binary_trees.h"

/**
* count - function that measures the size of a binary tree.
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
* binary_tree_leaves - function that counts the nodes with leaf.
* @tree: node parent
* Return: sum of leaves
*/

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (!tree->left && !tree->right) /*is leaf*/
		return (1);

	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}

/**
* binary_tree_nodes - counts nodes with at least 1 child in a binary tree.
* @tree: root node.
* Return: sum nodes with at least 1 child in a binary tree.
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if ((!tree->left && tree->right) || (tree->left && !tree->right))
		return (1);
	return (count(tree) + 1 - binary_tree_leaves(tree));
}
