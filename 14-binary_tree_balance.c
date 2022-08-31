#include "binary_trees.h"
/**
 * binary_tree_height - measures the height of the tree
 * @tree: pointer to the root node of the tree
 * Return : Balance factor or 0
 */
int binary_tree_height_1(const binary_tree_t *tree)
{
	int Rheight, Lheight;

	if (!tree)
		return (0);
	Rheight = binary_tree_height_1(tree->right) + 1;
	Lheight = binary_tree_height_1(tree->left) + 1;
	if (Lheight > Rheight)
		return (Lheight);
	else
		return (Rheight);
}
/**
 * binary_tree_balance - measures the balance of the tree
 * @tree: pointer to the root node of the tree
 * Return : Balance factor or 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	 int Rheight, Lheight;
	 
	 if (!tree)
		 return (0);
	 Rheight = binary_tree_height_1(tree->right);
	 Lheight = binary_tree_height_1(tree->left);
	 return (Lheight - Rheight);
}
