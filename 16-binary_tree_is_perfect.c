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
		depth_left = tree->left ? 1 + tree_height(tree->left) : 0;
		depth_right = tree->right ? 1 + tree_height(tree->right) : 0;
		return ((depth_left > depth_right) ? depth_left : depth_right);
	}
	return (0);
}
/**
  * tree_size - calculate the size of the binary tree
  * @tree: pointer to the root node
  *
  * Return: size of the tree
  */
int tree_size(const binary_tree_t *tree)
{
	size_t total_size, left_size, right_size;

	total_size = 0;
	right_size = 0;
	left_size = 0;

	if (tree == NULL)
		return (0);

	left_size = tree_size(tree->left);
	right_size = tree_size(tree->right);
	total_size = left_size + right_size + 1;

	return (total_size);
}

/**
  * power - calculates the power
  * @x: The base
  * @n: The exponent
  * Return: the power
  */
int power(int x, int n)
{
	if (n == 0)
		return (1);

	if (x == 0)
		return (0);
	return (x * power(x, n - 1));
}
/**
  * binary_tree_is_perfect - checks if a binary tree is perfect
  * @tree: a pointer to the root node of the tree to check
  *
  * Return: 1 if perfect otherwise 0
  */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int h = 0, s = 0, perfect_size = 0;

	h = 1 + tree_height(tree);
	perfect_size = power(2, h) - 1;
	s = tree_size(tree);
	if (tree == NULL)
		return (0);

	if (perfect_size == s)
		return (1);
	return (0);
}
