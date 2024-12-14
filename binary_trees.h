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

size_t binary_tree_leaves(const binary_tree_t *tree);
size_t binary_tree_depth(const binary_tree_t *tree);
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));
int binary_tree_is_root(const binary_tree_t *node);
int binary_tree_is_leaf(const binary_tree_t *node);
void binary_tree_delete(binary_tree_t *tree);
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);
void binary_tree_print(const binary_tree_t *tree);
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
void binary_tree_inorder(const binary_tree_t *, void (*)(int));
size_t binary_tree_height(const binary_tree_t *);
size_t binary_tree_size(const binary_tree_t *);
size_t binary_tree_nodes(const binary_tree_t *);
int binary_tree_balance(const binary_tree_t *tree);


#endif
