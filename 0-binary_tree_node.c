#include "binary_trees.h"

/**
* binary_tree_node - function that creates a binary tree node.
* @parent: node parent
* @value: the value
* Return: new node
*/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new = malloc(sizeof(binary_tree_t));

	new->parent = parent;
	new->n = value;
	new->right = NULL;
	new->left = NULL;

	if (parent == NULL)
		parent = new;

	else
	{
		if (value < parent->n)
			parent->left = new;

		else
			parent->right = new;
	}
	return (new);
}
