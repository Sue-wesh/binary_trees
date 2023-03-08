#include "binary_trees.h"

/**
 * binary_tree_depth - measure the depth of a node in a binary tree
 * @tree: pointer to the node to measure the depth
 * Return: the depth, 0 if tree is NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree)
	{
		left_d = binary_tree_depth(tree->left);
		right_d = binary_tree_depth(tree->right);

		if (left_d > right_d)
			return left_d += 1;
		return right_d += 1;
	}
	return (0);
}
