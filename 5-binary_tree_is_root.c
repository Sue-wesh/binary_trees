#include "binary_trees.h"

/**
 * binary_tree_is_root - check if a given node is a root
 * @node: pointer to the node to check
 * Return: 1 if node is root otherwise 0 and if node is null
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	// if node is root then it has no parent
	if (node == NULL || node->parent != NULL)
		return 0;

	return (1);
}
