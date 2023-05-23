#ifndef BST_H
#define BST_H

typedef struct no {
    int valor;
    struct no *esq, *dir;
} no;

typedef no* arvore;

arvore inserir_bst(int valor, arvore raiz);
void pre_order_bst(arvore raiz);

#endif




