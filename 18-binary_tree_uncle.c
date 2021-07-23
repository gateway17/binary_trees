#include "binary_trees.h"

/**
 * binary_tree_sibling - function that finds the sibling of a node
 *
 * @node: pointer to the node to find the sibling
 *
 * Return: If node is NULL or parent is NULL return NULL, else return sibling.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
	{
		return (NULL);
	}
	if (node == node->parent->left)
	{
		return (node->parent->right);
	}
	return (node->parent->left);
}

#include "binary_trees.h"

/**
 * binary_tree_uncle - function that finds the uncle of a node.
 *
 * @node: pointer to the node to find the uncle.
 *
 * Return: If node is NULL return NULL, else return uncle of a node.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent)
	{
		return (NULL);
	}
	return (binary_tree_sibling(node->parent));
}
