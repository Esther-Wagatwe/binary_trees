#include "binary_trees.h"

/**
  * binary_tree_is_leaf - checks if node is a leaf
  * @node: pointer to node to check
  *
  * Return: 0 if not a leaf and 1 if it is a leaf
  */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->left == NULL && node->right == NULL)
		return (1);
	else
		return (0);
}
