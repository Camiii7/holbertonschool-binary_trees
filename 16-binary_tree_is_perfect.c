#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth of a tree
 * @tree: to measure
 * Return: tree depth
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	while (tree != NULL)
	{
		depth++;
		tree = tree->left;
	}

	return (depth);
}

/**
 * is_perfect_recursive - checks for depth and level
 * @tree: pointer to the current node
 * @depth: of the tree
 * @level: level in the tree
 * Return: 1 if it is perfect or 0
 */
int is_perfect_recursive(const binary_tree_t *tree, size_t depth, size_t level)
{
	if (tree == NULL)
		return (1);

	if (tree->left == NULL && tree->right == NULL)
		return (level + 1 == depth);

	if (tree->left == NULL || tree->right == NULL)
		return (0);

	return (is_perfect_recursive(tree->left, depth, level + 1) &&
			is_perfect_recursive(tree->right, depth, level + 1));
}

/**
 * binary_tree_is_perfect - checks if the tree is perfect
 * @tree: pointer to the root
 * Return: 1 if it is perfect or 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t depth;

	if (tree == NULL)
		return (0);

	depth = binary_tree_depth(tree);

	return (is_perfect_recursive(tree, depth, 0));
}
