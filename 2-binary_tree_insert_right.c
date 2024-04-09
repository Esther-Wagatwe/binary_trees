#include "binary_trees.h"

/**
  * binary_tree_insert_right - Inserts the right child of a node
  * @parent: pointer to the parent node
  * @value: data to be stored in the node
  *
  * Return: Pointer to right child
  */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	if (parent == NULL)
		return (NULL);

	newnode = binary_tree_node(parent, value);

	if (parent->right != NULL)
	{
		newnode->right = parent->right;
		parent->right->parent = newnode;
	}
	parent->right = newnode;

	return (newnode);
}
