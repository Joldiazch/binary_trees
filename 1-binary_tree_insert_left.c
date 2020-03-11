#include "binary_trees.h"

/**
* binary_tree_insert_left - function that create an child-left node.
* @parent: node parent
* @value: the value
* Return: new node
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *aux;
	binary_tree_t *new;

	if (!parent)
		return (NULL);

	new = malloc(sizeof(binary_tree_t));
	if (!new)
		return (NULL);

	if (parent->left)
	{
		aux = parent->left;
		new->n = value;
		new->parent = parent;
		aux->parent = new;
		new->left = aux;
		new->right = NULL;
		parent->left = new;
	}
	else
	{
		new->n = value;
		new->parent = parent;
		parent->left = new;
		new->left = NULL;
		new->right = NULL;
	}
	return (new);
}
