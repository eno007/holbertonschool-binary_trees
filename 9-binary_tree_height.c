#include "binary_trees.h"
/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 * Return: 0 if the tree is NULL or size of tree if SUCCESSFUL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t Lheight;
	size_t Rheight;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);
	Lheight = binary_tree_height(tree->left) + 1;
	Rheight = binary_tree_height(tree->right) + 1;
	if (Lheight > Rheight)
		return (Lheight);
	else
		return (Rheight);
}
