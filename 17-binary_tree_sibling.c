#include "binary_trees.h"

/**
 * binary_tree_sibling - find sibling of node
 * @node: pointer to the node to find the sibling
 * Return: pointer to the sibling node
 * null if node/parent is null or if no sibling
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL ||
			node->parent->left == NULL ||
			node->parent->right == NULL)
		return (NULL);

	if (node->parent->left == node)
		return (node->parent->right);
	return (node->parent->left);
}
