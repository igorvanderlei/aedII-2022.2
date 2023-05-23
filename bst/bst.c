#include "bst.h"
#include <stdio.h>
#include <stdlib.h>

arvore inserir_bst(int valor, arvore raiz){
    //caso base - inserir em uma árvore vazia
    if(raiz == NULL) {
        arvore novo = (arvore) malloc(sizeof(struct no));
        novo->esq = NULL;
        novo->dir = NULL;
        novo->valor = valor;
        //o retorno é a raiz da sub-árvore unitária que foi iniciada
        return novo;
    }
    //caso recursivo/indutivo
    else{
        if(valor > raiz->valor) {
            raiz->dir = inserir_bst(valor, raiz->dir);
        } else {
            raiz->esq = inserir_bst(valor, raiz->esq);
        }
        return raiz;
    }

}

void pre_order_bst(arvore raiz){
    if(raiz != NULL){
        //processar a raiz relativa
        printf("[%d]", raiz->valor);

        //encadeamentos recursivos esq, dir
        pre_order_bst(raiz->esq);
        pre_order_bst(raiz->dir);

    } //else caso base implícito não faz nada

}
