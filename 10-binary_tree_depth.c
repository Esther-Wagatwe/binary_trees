#include "binary_trees.h"
/**
  * binary_tree_depth - finds the depth of a node.
  * @tree: pointer to node to measure the depth of.
  * Return: depth or 0 if NULL.
  */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;
	
	depth = 0;

	if (tree == NULL)
		return (0);

	if (tree->parent != NULL)
	{
		depth = 1 + binary_tree_depth(tree->parent);
		
	}
	
	return (depth);
}
