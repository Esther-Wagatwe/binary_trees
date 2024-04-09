#include "binary_trees.h"
/**
  * binary_tree_nodes - counts the number of nodes with atleast 1 child
  * @tree: pointer to root node of the tree
  *
  * Return: number of nodes
  */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL || tree->right != NULL)
	{
		count = 1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right);
	}
	return (count);
}
