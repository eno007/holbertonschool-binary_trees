#include "binary_trees.h"

/**
 * binary_tree_leaves - Function that counts the leaves in a binary tree
 * @tree: pointeer to the root node
 * Return: number of leaves
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves_r, leaves_l, leaves;

	if (tree == NULL)
		return (0);
	if (tree != NULL)
	{
		leaves_l = binary_tree_leaves(tree->left) + 1;
		leaves_r = binary_tree_leaves(tree->right) + 1;
		leaves = leaves_l + leaves_r;
	}
	return (leaves);
}


