#include "binary_trees.h"
/**
 * binary_tree_is_complete - function that checks if a binary tree is complete
 * @tree: pointer to the root node of the tree to check
 * Return: 0 if tree is NULL or is not complete or 1 if it is complete
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	size_t comp_l = 0, comp_r = 0, comp = 0;

	if (!tree || (!tree->left && tree->right))
		return (0);

	if (!(tree->left) && !(tree->right))
		return (1);

	comp_l = binary_tree_is_complete(tree->left);
	comp_r = binary_tree_is_complete(tree->right);

	if (tree->left && !tree->right && (comp_l == 1 && comp_r == 0))
		return (2);

	if ((comp_l == 0 && comp_r > 0) || (comp_l > 0 && comp_r == 0))
		comp = 0;
	else if ((comp_l == 2 && comp_r == 2) || (comp_l == 2 && comp_r == 2))
		comp = 0;
	else
		comp = 1;

	return (comp);
}
