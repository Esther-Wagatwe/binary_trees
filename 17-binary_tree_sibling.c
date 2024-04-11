#include "binary_trees.h"

/**
  * binary_tree_sibling - checks if node has a sibling.
  * @node: pointer to node to chck for sibling.
  *
  * Return: pointer to sibling or NULL.
  */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent;

	if (node && node->parent)
	{
		parent = node->parent;

		if (parent->left == node)
			return (parent->right);
		else
			return (parent->left);
	}
	return (NULL);
}
