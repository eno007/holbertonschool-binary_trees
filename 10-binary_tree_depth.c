#include "binary_trees.h"
/**
 * binary_tree_depth - func that measures the depth of a node in a binary tree
 * @tree: pointer to the node to measure the depth
 * Return: measure of depth or 0 if it is NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->parent)
		return (binary_tree_depth(tree->parent) + 1);
	return (0);
}
