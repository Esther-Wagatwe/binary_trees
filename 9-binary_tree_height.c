#include "binary_trees.h"

/**
  * binary_tree_height - finds the depth of a tree
  * @tree: pointer to root node
  * Return: height of tree
  */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t depth_left, depth_right;

	depth_left = 0;
	depth_right = 0;

	if (tree)
	{
		depth_left = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		depth_right = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		return ((depth_left > depth_right) ? depth_left : depth_right);
	}
	return (0);
}
