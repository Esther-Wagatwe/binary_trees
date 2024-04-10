#include "binary_trees.h"
/**
  * tree_height - finds the depth of a tree
  * @tree: pointer to root node
  * Return: height of tree
  */
int tree_height(const binary_tree_t *tree)
{
	size_t depth_left, depth_right;

	depth_left = 0;
	depth_right = 0;

	if (tree)
	{
		depth_left = tree->left ? 1 + tree_height(tree->left) : 1;
		depth_right = tree->right ? 1 + tree_height(tree->right) : 1;
		return ((depth_left > depth_right) ? depth_left : depth_right);
	}
	return (0);
}

/**
  * binary_tree_balance - calculates the balance factor of a tree.
  * @tree: pointer to the root of the tree.
  *
  * Return: balance factor.
  */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height = 0, right_height = 0, total = 0;

	if (tree == NULL)
		return (0);

	if (tree)
	{
		left_height = tree_height(tree->left);
		right_height = tree_height(tree->right);
		total = left_height - right_height;
	}
	return (total);
}
