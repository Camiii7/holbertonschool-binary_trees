#include "binary_trees.h"

/**
 * binary_tree_height - get the height of a tree
 * @tree: pointer to the tree to measure
 * Return: height of the tree
 */


size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_left;
	size_t height_right;

	if (tree == NULL)
		return (0);

	height_left = binary_tree_height(tree->left);
	height_right = binary_tree_height(tree->right);

	return (1 + (height_left > height_right ? height_left : height_right));
}
