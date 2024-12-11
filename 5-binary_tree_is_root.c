#include "binary_trees.h"

/**
 * binary_tree_is_root - Chequea si el nodo es la raiz
 * @node: Que se le pasa a la funcion
 * Return: 0 si es NULL 1 si es la raiz
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->parent == NULL)
		return (1);

	return (0);
}
