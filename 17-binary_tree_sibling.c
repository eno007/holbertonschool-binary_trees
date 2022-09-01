#include "binary_trees.h"
/**
 * binary_tree_sibling - function that finds the sibling of a node
 * @node: pointer to the node to find the sibling
 * Return: function must return a pointer to the sibling node or NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent || !node->parent->right
			|| !node->parent->left)
		return (NULL);
	if (node->parent->left->n == node->n)
		return (node->parent->right);
	else
		return (node->parent->left);
}
