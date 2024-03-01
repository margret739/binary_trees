#include "binary_trees.h"

/**
 * binary_tree_postorder - traverses s binary tree using post-order
 * traversal.
 * @tree: a pointer to the root node of the tree.
 * @func: a pointer to a function to call.
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
