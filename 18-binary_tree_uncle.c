#include "binary_trees.h"

/**
  * binary_tree_uncle - checks if node has an uncle node.
  * @node: pointer to the node to check uncle for.
  *
  * Return: pointer to uncle node or NULL
  */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *grand, *parent;

	if (node && node->parent && node->parent->parent)
	{
		grand = node->parent->parent;
		parent = node->parent;

		if (grand->left == parent)
			return (grand->right);
		else
			return (grand->left);
	}

	return (NULL);
}
