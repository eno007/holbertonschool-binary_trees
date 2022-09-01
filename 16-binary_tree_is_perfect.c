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
/**
 * binary_tree_is_perfect - Ffunction that checks is a binay tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: 0 if tree is empty 1 if tree is perfect
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	binary_tree_t *left, *right;

	if (tree == NULL)
		return (0);
	left = tree->left;
	right = tree->right;

	if (binary_tree_is_leaf(tree))
		return (1);
	if (left == NULL || right == NULL)
		return (0);
	if (binary_tree_height(left) == binary_tree_height(right))
	{
		if (binary_tree_is_perfect(left) && binary_tree_is_perfect(right))
			return (1);
	}
	return (0);
}


