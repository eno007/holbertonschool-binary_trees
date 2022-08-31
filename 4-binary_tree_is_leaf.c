#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Function that checks if a node is a leaf
 * @node: is a pointer to the node to check
 * Return: leaf
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL || node->left || node->right)
		return (0);
	return (1);
}
