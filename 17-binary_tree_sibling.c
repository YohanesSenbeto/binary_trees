#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of a node .
 * @node: pointer to the node to find the sibling of.
 *
 * Return: If node is NULL ===> NULL.Otherwise a ptr to the sibling.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *my_node = node;

	if (my_node == NULL || my_node->parent == NULL)
		return (NULL);
	if (my_node->parent->left == my_node)
		return (my_node->parent->right);
	return (my_node->parent->left);
}
