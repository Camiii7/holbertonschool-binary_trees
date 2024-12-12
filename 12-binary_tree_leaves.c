#include "binary_trees.h"

/**
 * binary_tree_leaves - Cuenta las hojas en un a¡rbol binaro
 * @tree: Puntero a la raÃ­z del Ã¡rbol para contar el nÃºmero de ho
 * Return: Numero de hojas en el a¡rbo, si tree es NULL, retorna 0
 */


size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
	return (0);


	if (tree->left == NULL && tree->right == NULL)
	return (1);

	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
