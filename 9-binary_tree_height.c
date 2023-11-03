#include "binary_trees.h"

/**
 * binary_tree_height - This Measures the height of a binary tree.
 * @tree: pointer to the root node of the tree to measure its height.
 *
 * Return: If tree is NULL, then return 0, else return height.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
const binary_tree_t *x = tree;

	if (x)
	{
	size_t leftside = 0, rightside = 0;

	leftside = x->left ? 1 + binary_tree_height(x->left) : 0;
	rightside = x->right ? 1 + binary_tree_height(x->right) : 0;


		return ((leftside >= rightside) ? leftside : rightside);
	}
	return (0);
}
