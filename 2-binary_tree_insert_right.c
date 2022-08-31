#include "binary_trees.h"

/**
 * binary_tree_insert_right - Function that inserts a node as the right-child
 * of another node
 * @parent: is a pointer to the node to insert the right-child
 * @value: the value taken by the new node
 * Return: new node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node, *tmp;

	(void)(*new_node);
	(void)(value);

	if (parent == NULL)
		return (NULL);
	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;
	if (parent->right == NULL)
	{
		parent->right = new_node;
		new_node->parent = parent;
	}
	else
	{
		tmp = parent->right;
		parent->right = new_node;
		new_node->right = tmp;
		new_node->parent = parent;
		tmp->parent = new_node;
	}
	return (new_node);
}


