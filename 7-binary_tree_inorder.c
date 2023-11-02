#include "binary_trees.h"

/**
 * binary_tree_inorder - Searches through a binary tree by in-order traversal.
 * @tree: A pointer to the root node of the tree to traverse.
 * @my_function: A pointer to a function to call for each node.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*my_function)(int))
{
    if (tree && my_function)
    {
        binary_tree_inorder(tree->left, my_function);
        my_function(tree->n);
        binary_tree_inorder(tree->right, my_function);
    }
}
