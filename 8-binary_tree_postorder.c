#include "binary_trees.h"

/**
* binary_tree_postorder - Performs the post-order traversal of a binary tree.
* @tree: A Pointer to the root node of the tree to traverse.
* @func: A Pointer to a function to call for each node.
*        The value in the node must be passed as a parameter to this function.
*
* Description: This function traverses a binary tree using post-order traversal.
*              In post-order traversal, the left subtree is traversed first,
*              then the right subtree is traversed, and finally the current node is visited.
*              The specified function is performed on each node during the traversal.
*
* If either tree or func is NULL, the function does nothing.
*/
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
if (tree == NULL || func == NULL)
return;

binary_tree_postorder(tree->left, func);

binary_tree_postorder(tree->right, func);

func(tree->n);
}
