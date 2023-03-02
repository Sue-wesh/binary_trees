#include "binary_trees.h"

/**
 * binary_tree_postorder - post-order traversal of binary tree
 * @tree: pointer to the root node of the tree to traverse
 * @func:  pointer to a function to call for each node
 * description: If tree or func is NULL, do nothing
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
