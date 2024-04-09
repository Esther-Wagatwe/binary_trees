#include "binary_trees.h"

/**
  * binary_tree_insert_left - Inserts the left child of a node
  * @parent: pointer to the parent node
  * @value: data to be stored in the node
  *
  * Return: Pointer to left child
  */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	if (parent == NULL)
		return (NULL);

	newnode = binary_tree_node(parent, value);

	if (parent->left != NULL)
	{
		newnode->left = parent->left;
		parent->left->parent = newnode;
	}
	parent->left = newnode;

	return (newnode);
}
