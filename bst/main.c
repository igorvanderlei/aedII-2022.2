#include "bst.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char*argv[]) {
    //declarar uma árvore
    arvore a;
    int opcao, aux;


    //inicializar a árvore como uma árvore vazia
    a = NULL;

    while(1) {
        scanf("%d", &opcao);
        switch(opcao) {
            case 1:
                scanf("%d", &aux);
                a = inserir_bst(aux, a);
                break;
            case 2:
                pre_order_bst(a);
                break;
            case 3:
                exit(0);
        }
    }
}
