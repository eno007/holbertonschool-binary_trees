#include "binary_trees.h"

/**
 * binary_tree_uncle - Function that finds the uncle in a binary tree
 * @node: pointer to the node to find uncle
 * Return: NULL if node is NULL & return uncle when you find uncle
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL && node->parent == NULL && node->parent->parent == NULL)
		return (NULL);
	if (node->parent == node->parent->parent->left)
		return (node->parent->parent->right);
	return (node->parent->parent->left);
}
