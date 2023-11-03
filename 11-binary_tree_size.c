#include "binary_trees.h"

/**
 * binary_tree_size - Measures the size_measured of a binary tree.
 * @tree: A pointer to the root node of the tree to be mesured.
 *
 * Return: size_measured of the tree.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size_measured = 0;

	if (tree)
	{
		size_measured += 1;
		size_measured += binary_tree_size(tree->left);
		size_measured += binary_tree_size(tree->right);
	}
	return (size_measured);
}
