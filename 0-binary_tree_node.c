#include <stdio.h>

/**
 * binary_tree_node - function that creates a binary tree node
 * @parent: pointer to the parent node of the node to create
 * @value: value to put in the new node
 * 
 * Return: return pointer to the new node
 * return NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new = malloc(sizeof(struct node));
	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;

	if (new)
		return new;
	return;
}
