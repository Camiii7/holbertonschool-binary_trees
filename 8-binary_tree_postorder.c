#include "binary_trees.h"

/**
 * binary_tree_postorder - Recorre un arbol binario en postorden
 * @tree: Apuntador al nodo rai­z dela¡rbol que se va a recorrer
 * @func: Apuntador a una funcio³n para llamar con el valor de cada nodo
 * Return: Si el a¡rbol o la funco³n son NULL, no hace na
 * Recorrido postorden: Recorre suba¡rbol izquierd, derecho y nodo actual
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	return;

	/* Recursivamente recorre el suba¡rbol izquierdo*/
	binary_tree_postorder(tree->left, func);

	/* Recursivamente recorre el suba¡rbol derech */
	binary_tree_postorder(tree->right, func);

	/* Llamamos a la funcio³n en el valor del nodo actual */
	func(tree->n);
}
