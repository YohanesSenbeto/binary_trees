#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts nodes having at least 1 child in a Btree.
 * @tree_pointer: A pointer to root node of Btree to count number of nodes.
 *
 * Return: If tree_pointer is NULL ==> return 0, else ==> return node count.
 */
size_t binary_tree_nodes(const binary_tree_t *tree_pointer)
{
    size_t nodes_tobe_checked = 0;

    if (tree_pointer)
    {
        nodes_tobe_checked += (tree_pointer->left || tree_pointer->right) ? 1 : 0;
        nodes_tobe_checked += binary_tree_nodes(tree_pointer->left);
        nodes_tobe_checked += binary_tree_nodes(tree_pointer->right);
    }
    return (nodes_tobe_checked);
}
