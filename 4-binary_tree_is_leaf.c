#include "binary_trees.h"
/**
 * binary_tree_is_leaf - Checks if a node is a leaf.
 * @node: Pointer to the node to be checked.
 *
 * Return: 1 if the node is a leaf, 0 otherwise or if the node is NULL.
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	return (node->left == NULL && node->right == NULL);
}