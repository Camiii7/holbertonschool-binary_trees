#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Chequea si un nodo es una hoja
 * @node: Nodo que se le pasa
 * Return: 0 si es NULL o 1 si es hoja
 */




int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->left == NULL && node->right == NULL)
		return (1);

	return (0);
}
