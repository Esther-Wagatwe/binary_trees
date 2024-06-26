#include "binary_trees.h"

/**
  * binary_tree_size - calculate the size of the binary tree
  * @tree: pointer to the root node
  *
  * Return: size of the tree
  */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t total_size, left_size, right_size;

	total_size = 0;
	right_size = 0;
	left_size = 0;

	if (tree == NULL)
		return (0);

	left_size = binary_tree_size(tree->left);
	right_size = binary_tree_size(tree->right);
	total_size = left_size + right_size + 1;

	return (total_size);
}
