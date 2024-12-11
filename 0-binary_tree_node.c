#include <stdlib.h>
#include "binary_trees.h"


/**
 * binary_tree_node - Crear un nodo de un arbol binario
 * @parent: Puntero al nodo padre
 * @value: Valor en el nuevo nodo
 * Return: Puntero al nuevo nodo o NULL si falla
 */


binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

	if (!new_node)

		return (NULL);

	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;

	return (new_node);
}
