#include "binary_trees.h"

/**
 * binary_tree_nodes - count nodes with childs
 * @tree: given tree
 * Return: number of nodes
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t has_child;

	if (tree == NULL)
		return (0);

	has_child = (tree->left != NULL || tree->right != NULL) ? 1 : 0;

	return (has_child + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
}
