#include "binary_trees.h"

/**
* binary_tree_height - Measures the height of a binary tree.
* @tree: Pointer to the root node of the tree to measure the height.
*
* Return: Height of the tree.
*         If tree is NULL, the function returns 0.
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t left_height, right_height;

if (tree == NULL)
return 0;

/*Calculate the height of the left subtree*/
left_height = binary_tree_height(tree->left);

/*Calculate the height of the right subtree*/
right_height = binary_tree_height(tree->right);

/* Return the maximum height between the left and right subtrees, plus 1 for the current node*/
return (left_height > right_height ? left_height : right_height) + 1;
}

/**
* binary_tree_balance - Measures the balance factor of a binary tree.
* @tree: Pointer to the root node of the tree to measure the balance factor.
*
* Return: Balance factor of the tree.
*         If tree is NULL, the function returns 0.
*/
int binary_tree_balance(const binary_tree_t *tree)
{
int left_height, right_height;

if (tree == NULL)
return 0;

/*Calculate the height of the left subtree*/
left_height = (int)binary_tree_height(tree->left);

/*Calculate the height of the right subtree*/
right_height = (int)binary_tree_height(tree->right);

/*Return the balance factor by subtracting the height of the right subtree from the height of the left subtree*/
return left_height - right_height;
}
