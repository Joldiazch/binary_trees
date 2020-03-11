#include "binary_trees.h"

/**
* binary_tree_insert_right - function that create an child-right node.
* @parent: node parent
* @value: the value
* Return: new node
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *tmp;
	binary_tree_t *new;

	if (!parent)
		return (NULL);

	*new = malloc(sizeof(binary_tree_t));
	if (!new)
		return (NULL);

	if (parent->right)
	{
		tmp = parent->right;
		new->n = value;
		new->parent = parent;
		tmp->parent = new;
		new->right = tmp;
		new->left = NULL;
		parent->right = new;
	}
	else
	{
		new->n = value;
		new->parent = parent;
		new->left = NULL;
		new->right = NULL;
		parent->right = new;
	}
	return (new);
}
