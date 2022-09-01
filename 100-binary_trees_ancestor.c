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

/**
 * binary_trees_ancestor - Function that finds the lowest common ancestor of 2
 * nodes
 * @first: pointer to the first node to check
 * @second: pointer to the second node
 * Return: NULL or anceestor
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	int size1, size2;

	if (first == NULL || second == NULL)
		return (NULL);
	if (first->n == second->n)
		return ((binary_tree_t *)first);
	size1 = binary_tree_depth(first);
	size2 = binary_tree_depth(second);

	if (size1 > size2)
	{
		while (size1 > size2)
		{
			first = first->parent;
			if (first == NULL)
				return (NULL);
			size1 = binary_tree_depth(first);
		}
	}
	else if (size2 > size1)
	{
		while (size2 > size1)
		{
			second = second->parent;
			if (second == NULL)
				return (NULL);
			size2 = binary_tree_depth(second);
		}
	}
	while (first && second != NULL)
	{
		if (first->n == second->n)
			return ((binary_tree_t *)first);
		first = first->parent;
		second = second->parent;
	}
	return (NULL);
}

