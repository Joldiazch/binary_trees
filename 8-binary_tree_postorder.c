#include "binary_trees.h"

/**
* binary_tree_postorder - function that usign post-order traversal.
* @tree: node to check
* @func: pointer to a function
* Return: none
*/

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
