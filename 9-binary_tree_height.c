#include "binary_trees.h"

/**
 * binary_tree_height - a function that measures the height
 * of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the height.
 *
 * Return: If tree is NULL return 0, if tree exists return height.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t tree_left = 0, tree_right = 0;

	if (tree)
	{
		if (tree->left == NULL && tree->right == NULL)
		{
			return (0);
		}
		tree_left = binary_tree_height(tree->left);
		tree_right = binary_tree_height(tree->right);
		if (tree_left > tree_right)
			return (tree_left + 1);
		else
			return (tree_right + 1);
	}
	return (0);
}
