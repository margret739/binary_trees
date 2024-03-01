#include "binary_trees.h"

/**
 * binary_trees_ancestor - finds the lowest common ancestor
 * of two nodes.
 * @first: pointer to the first node.
 * @second: pointer to the second node.
 * Return: if no common ancestors eturn NULL, else return
 * common ancestor.
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	binary_tree_t *mon, *mop;

	if (!first || !second)
		return (NULL);
	if (first == second)
		return ((binary_tree_t *)first);

	mon = first->parent, mop = second->parent;
	if (first == mop || !mon || (!mon->parent && mop))
		return (binary_trees_ancestor(first, mop));
	else if (mon == second || !mop || (!mop->parent && mon))
		return (binary_trees_ancestor(mon, second));
	return (binary_trees_ancestor(mon, mop));
}
