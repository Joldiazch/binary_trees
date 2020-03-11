#include "binary_trees.h"

/**
* binary_tree_preorder - function that usign pre-order traversal.
* @tree: node to check
* @func: pointer to a function
* Return: none
*/

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
