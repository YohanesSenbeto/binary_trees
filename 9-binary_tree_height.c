#include "binary_trees.h"

/**
 * binary_tree_height - This Measures the height of a binary tree_pointer.
 * @tree_pointer: pointer to the root node of the tree_pointer to measure its height.
 *
 * Return: If tree_pointer is NULL, then return 0, else return height.
 */
size_t binary_tree_height(const binary_tree_t *tree_pointer)
{
    if (tree_pointer)
    {
        size_t leftside = 0, rightside = 0;

        leftside = tree_pointer->left ? 1 + binary_tree_height(tree_pointer->left) : 0;
        rightside = tree_pointer->right ? 1 + binary_tree_height(tree_pointer->right) : 0;
        return ((leftside > rightside) ? leftside : rightside);
    }
    return (0);
}
