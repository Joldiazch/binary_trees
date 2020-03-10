#include "binary_trees.h"

/**
* binary_tree_insert_right - function that create an child-right node.
* @parent: node parent
* @value: the value
* Return: new node
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	int aux;

	binary_tree_t *new = malloc(sizeof(binary_tree_t));

	if (!new || !parent)
		return (NULL);

	new->left = NULL;
	new->right = NULL;

	if (parent->right)
	{
		aux = parent->right->n;
		parent->right->n = value;
		new->n = aux;
		new->parent = parent->right;
		parent->right->right = new;
	}
	else
	{
		new->n = value;
		new->parent = parent;
		parent->right = new;
	}
	return (new);
}
