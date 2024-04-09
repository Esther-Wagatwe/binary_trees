#include "binary_trees.h"

/**
  * binary_tree_is_root - checks if node is root
  * @node: pointer to node to check if it is root
  *
  * Return: 1 if node is root, Otherwise 0
  */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->parent == NULL)
		return (1);
	else
		return (0);
}
