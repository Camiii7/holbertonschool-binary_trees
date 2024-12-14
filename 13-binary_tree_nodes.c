#include "binary_trees.h"

/**
 * binary_tree_nodes - count nodes with childs
 * @tree: given tree
 * Return: number of nodes
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t has_child;
	size_t count = 0;

	if (tree == NULL)
		return (0);

	has_child = (tree->left != NULL || tree->right != NULL) ? 1 : 0;

	/* Arragement to be betty complaince - No line over 80 characters */
	count = has_child;
	count += binary_tree_nodes(tree->left);
	count += binary_tree_nodes(tree->right);

	return (count);
}
