#include "binary_trees.h"

/**
* binary_tree_preorder - Goes through a binary tree using pre-order traversal.
* @tree: Pointer to the root node of the tree to traverse.
* @func: Pointer to a function to call for each node.
*        The value in the node must be passed as a parameter to this function.
*
* Description: This function traverses a binary tree using pre-order traversal.
*              In pre-order traversal, the current node is visited first,
*              then the left subtree is traversed, and finally the right subtree.
*              The specified function is performed on each node during the traversal.
*
* If tree or func is NULL, the function does nothing.
*/
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
if (tree == NULL || func == NULL)
return;

func(tree->n);
binary_tree_preorder(tree->left, func);

binary_tree_preorder(tree->right, func);
}
