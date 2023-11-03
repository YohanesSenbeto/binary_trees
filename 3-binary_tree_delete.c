#include "binary_trees.h"

/**
 * binary_tree_delete - Deletes a binary tree_root.
 * @tree_root: A pointer to the root node of the tree to delete.
 */
void binary_tree_delete(binary_tree_t *tree_root)
{
	if (tree_root != NULL)
	{
		binary_tree_delete(tree_root->left);
		binary_tree_delete(tree_root->right);

		free(tree_root);
	}
}
