#include "binary_trees.h"

/**
 * binary_tree_node - Create a new binary tree node
 * @parent: parent node
 * @value: The value to insert
 * Return: Pointer to the new node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);
	new->parent = parent;
	new->left = NULL;
	new->n = value;
	new->right = NULL;
	return (new);
}
