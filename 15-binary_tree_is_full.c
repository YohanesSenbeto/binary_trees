#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks if a binary tree is full.
 * @tree: A pointer to the root node of the tree to check.
 *
 * Return: If tree is NULL or is not full - 0.
 *         Otherwise - 1.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	int is_left_full = 0;
	int is_right_full = 0;

	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}
	else if (tree->left != NULL && tree->right != NULL)
	{
		is_left_full = binary_tree_is_full(tree->left);
		is_right_full = binary_tree_is_full(tree->right);
	}

	return (is_left_full && is_right_full);
}
