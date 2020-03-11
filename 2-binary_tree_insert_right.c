#include "binary_trees.h"

/**
* binary_tree_insert_right - function that create an child-right node.
* @parent: node parent
* @value: the value
* Return: new node
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *aux;

	binary_tree_t *new = malloc(sizeof(binary_tree_t));

	if (!new || !parent)
		return (NULL);

	new->left = NULL;
	new->right = NULL;

	if (parent->right)
	{
		aux = parent->right;
		new->n = value;
		new->parent = parent;
		aux->parent = new;
		new->right = aux;
		parent->right = new;
	}
	else
	{
		new->n = value;
		new->parent = parent;
		parent->right = new;
	}
	return (new);
}
