#include "binary_trees.h"

/**
* binary_tree_sibling - function that find siblings.
* @node: node parent
* Return: node sibling
*/

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	int value;

	if (!node || !node->parent)
		return (NULL);

	value = node->n;

	if (node->parent && node->parent->left->n != value &&
		node->parent->left)
		return (node->parent->left);

	else if (node->parent && node->parent->right->n != value &&
			node->parent->right)
		return (node->parent->right);

	else
		return (NULL);
}
