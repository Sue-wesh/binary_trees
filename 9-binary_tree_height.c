#include "binary_trees.h"

/**
 * binary_tree_height - measure height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 * Return: 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		left_h = binary_tree_height(tree->left);
		right_h = binary_tree_height(tree->right);

		return max(left_h, right_h) + 1;
	}
	return (0);
}
