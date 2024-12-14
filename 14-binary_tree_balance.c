#include "binary_trees.h"

/**
 * binary_tree_height - get the height of a tree
 * @tree: pointer to the tree to measure
 * Return: height of the tree
 */


size_t binary_tree_height(const binary_tree_t *tree)
{
        size_t height_left = 0;
        size_t height_right = 0;

        if (tree == NULL)
                return (0);

        if (tree->left != NULL)
                height_left = binary_tree_height(tree->left) + 1;

        if (tree->right != NULL)
                height_right = binary_tree_height(tree->right) + 1;

        if (height_left > height_right)
                return (height_left);
        else
                return (height_right);
}

int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height;
	int right_height;

	if (tree == NULL)
		return (0);

	left_height = tree->left ? (int)binary_tree_height(tree->left) : 0;
	right_height = tree->right ? (int)binary_tree_height(tree->right) : 0;

	return left_height - right_height;
}
