#include "binary_trees.h"

/**
 * binary_tree_is_full - check if binary tree is full
 * @tree: pointer to the root node of the tree to check
 * Return: 0 if tree is NULL
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree)
	{
		if ((tree->left && tree->right) || (!tree->left && !tree->right))
			return (1);
	}
	return (0);
}
