#include "binary_trees.h"

/**
 * binary_tree_is_full - Verifica si un a¡rbol binario es llen
 * @tree: Puntero al nodo raiz de un a¡rbol a verifica
 * Return: 1 si el a¡rbol es lleno, 0 n caso que no
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree->left != NULL && tree->right != NULL)
		return (binary_tree_is_full(tree->left) &&
			binary_tree_is_full(tree->right));

	return (0);
}
