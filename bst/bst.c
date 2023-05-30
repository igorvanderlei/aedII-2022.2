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

arvore remover_bst(arvore raiz, int valor) {
    //Remover de uma (sub)árvore vazia / remover elemento inexistente
    if(raiz == NULL) {
        return raiz;
    }
    //Encontrou o elemento
    if(raiz->valor == valor) {
        //Verificação de 0 filhos, 1 filho, 2 filhos
        //caso 1 - zero filhos
        if(raiz->esq == NULL && raiz->dir == NULL) {
            free(raiz);
            return NULL;
        }
        //caso 2 (a): exatamente um filho esquerdo
        if(raiz->esq != NULL && raiz->dir == NULL) {
            arvore aux = raiz->esq;
            free(raiz);
            return aux;
        }

        //caso 2 (b): exatamente um filho direito

        //caso 3: dois filhos
        //não precisa de if

        int maiorValorSubarvoreEsquerda = maior(raiz->esq)->valor;
        raiz->valor = maiorValorSubarvoreEsquerda;
        raiz->esq = remover_bst(raiz->esq, maiorValorSubarvoreEsquerda);

        return raiz;
    }
    if(valor > raiz->valor) {
       raiz->dir = remover_bst(raiz->dir, valor);
    } else {
        //simétrico
    }
    return raiz;
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
