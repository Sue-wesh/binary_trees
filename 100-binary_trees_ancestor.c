#include "binary_trees.h"

/**
 * binary_trees_ancestor - find lowest common ancestor of two nodes
 * @first: pointer to the first node
 * @second: pointer to the second node
 * Return: pointer to lowest common ancestor node of the two nodes
 * NULL if no common ancestor is found
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	binary_tree_t *first_par = first->parent;
	binary_tree_t *second_par = second->parent;

	if (!first || !second)
		return (NULL);
	if (first == second)
		return ((binary_tree_t *)first);
	if (first_par == second_par)
		return ((binary_tree_t *)first_par);
	if (first_par->parent == second_par->parent)
		return ((binary_tree_t *)second_par->parent);
	return (binary_trees_ancestor(first_par, second_par));
}
