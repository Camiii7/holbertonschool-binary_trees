#include "binary_trees.h"

/**
 * binary_tree_preorder - Recorrer el arbol binario en preorden
 * @tree: Apuntar al nodo raiz del arbol que se va a recorrer 
 * @func: Apuntador a una funcion para llamar con el valor de cada nodo 
 * Return: Si el arbol o la funcion son NULL no hace nada
 * Recorrido preorden: Priemro la raiz, luego el subarbol izquierdo y despues el subarbol derecho
 **/


void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	/* Llamamos a la funcio³n en el valor del nodo actual */
	func(tree->n);

	/* Recursivamente recorre el subarbol izquierdo */
	binary_tree_preorder(tree->left, func);

	 /* Recursivamente recorremos el suba¡rbol derecho */
	binary_tree_preorder(tree->right, func);


} 

