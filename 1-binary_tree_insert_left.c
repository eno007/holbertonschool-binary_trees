#include "binary_trees.h"

/**
 * binary_tree_insert_left - Function that inserts a node as the left-child
 * of another node
 * @parent: is a pointer to the node to insert the left-child
 * @value: the value taken by the new node
 * Return: new node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
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
	if (parent->left == NULL)
	{
		parent->left = new_node;
		new_node->parent = parent;
	}
	else 
	{
		tmp = parent->left;
		parent->left = new_node;
		new_node->left = tmp;
		new_node->parent = parent;
		tmp->parent = new_node;
	}
	return (new_node);
}


