#include "binary_trees.h"

/**
 * binary_tree_leaves - a function that counts the leaves in a binary tree.
 *
 * @tree: A pointer to the root node of the tree to count the leaves of.
 *
 * Return: If tree is NULL return 0, else return the leaves in the binary tree.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree)
	{
		if (tree->left == NULL || tree->right == NULL)
		{
			return (1);
		}
		return (binary_tree_leaves(tree->left)
			+ binary_tree_leaves(tree->right));
	}
	return (0);
}
