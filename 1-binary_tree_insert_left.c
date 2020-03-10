#include "binary_trees.h"

/**
* binary_tree_insert_left - function that create an child-left node.
* @parent: node parent
* @value: the value
* Return: new node
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	int aux;

	binary_tree_t *new = malloc(sizeof(binary_tree_t));

	if (!new || !parent)
		return (NULL);

	new->left = NULL;
	new->right = NULL;

	if (parent->left)
	{
		aux = parent->left->n;
		parent->left->n = value;
		new->n = aux;
		new->parent = parent->left;
		parent->left->left = new;
	}
	else
	{
		new->n = value;
		new->parent = parent;
		parent->left = new;
	}
	return (new);
}
