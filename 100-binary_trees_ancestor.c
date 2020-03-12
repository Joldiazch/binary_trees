#include "binary_trees.h"

/**
* binary_tree_uncle - function that find uncles.
* @node: node parent
* Return: node uncle
*/

binary_tree_t *uncle(const binary_tree_t *node)
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
#include "binary_trees.h"

/**
* binary_tree_sibling - function that find siblings.
* @node: node parent
* Return: node sibling
*/

binary_tree_t *sibling(const binary_tree_t *node)
{
	int value;

	if (!node || !node->parent)
		return (NULL);

	value = node->n;

	if (node->parent->left && node->parent->right)
	{
		if (node->parent->left->n != value &&
			node->parent->left)
			return (node->parent->left);

		else if (node->parent->right->n != value &&
				node->parent->right)
			return (node->parent->right);
	}
	return (NULL);
}

/**
* binary_trees_ancestor - function that find siblings.
* @first: node parent
* @second: node 
* Return: node sibling
*/

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
                                    const binary_tree_t *second)
{
    if (!first || !second)
        return (NULL);
    if (first->parent == second)
        return (binary_tree_t *)second;
    if (second->parent == first)
        return (binary_tree_t *)first;
    if (sibling(first) == second || uncle(first) == second ||
        uncle(second) == first)
        return (first->parent);
    return (binary_trees_ancestor(first->parent, second->parent));
}
