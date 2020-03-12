#include "binary_trees.h"

/**
* binary_tree_uncle - function that find uncles.
* @node: node parent
* Return: node uncle
*/

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	int value;

	if (!node)
		return (NULL);

	if (node->parent)
	{
		value = node->parent->n;

		if (node->parent->parent)
		{
			if (node->parent->parent->left && node->parent->parent->right)
			{
				if (node->parent->parent->left && node->parent->parent->left->n != value)
					return (node->parent->parent->left);

				else if (node->parent->parent->right &&
						node->parent->parent->right->n != value)
					return (node->parent->parent->right);

				else
					return (NULL);
			}
		}
		return (NULL);
	}
	return (NULL);
}
