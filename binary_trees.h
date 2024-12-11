#ifndef BINARY_TREES_H
#define BINARY_TREES_H

#include <stddef.h> 

/**
 * struct binary_tree_s - Nodo de un a¡rbol binario
 * @n: Entero almacenado en el nodo
 * @parent: Puntero al nodo padre
 * @left: Puntero al hijo izquierdo
 * @right: Puntero al hijo derecho
 */
struct binary_tree_s
{
	int n;
	struct binary_tree_s *parent;
	struct binary_tree_s *left;
	struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);
void binary_tree_print(const binary_tree_t *tree);
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);

#endif

