#include "binary_trees.h"

/**
* binary_tree_depth - To  Measures the depth of a node in a binary tree.
* @tree: Pointer to the node to measure the depth.
*
* Return: Depth of the node.
*         If tree is NULL, the function returns 0.
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
size_t depth = 0;

if (tree == NULL)
return 0;

/*
Traverse up the tree until reaching the root (parent is NULL)
*/
while (tree->parent != NULL)
{
depth++;
tree = tree->parent;
}

return depth;
}
