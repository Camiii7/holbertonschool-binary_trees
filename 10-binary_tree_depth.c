#include "binary_trees.h"

/**
 * binary_tree_depth - Mide la profundidad de un nodo en un a¡rbol binari
 * @tree: Apuntador al nodo para medir la profundidad
 * Return: La profundidad del nodo, si el nodo es NULL, devuelve 0.
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL || tree->parent == NULL)
	return (0);

	/* Calcula recursivamente la profundidad sumamdo 1 */
	return (1 + binary_tree_depth(tree->parent));
}
