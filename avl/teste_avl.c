#include <stdio.h>
#include <stdlib.h>
#include "avl.h"

int main(int argc, char * argv[]) {
	arvore a;
	int opcao;
	int controleFB;
	inicializar(&a);

	while(1) {
		scanf("%d", &opcao);

		switch(opcao) {
				int valor;
				case 1:
						printf("%d\n", altura(a));
						break;
				case 2:
						scanf("%d", &valor);
						a = adicionar(valor, a, &controleFB);
						break;
				case 3:
						printf("%d\n", maior_elemento(a));
						break;
				case 4:
						printf("%d\n", menor_elemento(a));
						break;
				case 5:
						pre_order(a);
						printf("\n");
						break;
				case 6:
						in_order(a);
						printf("\n");
						break;
				case 7:
						pos_order(a);
						printf("\n");
						break;
				case 8:
						scanf("%d", &valor);
						a = remover(valor, a);
						break;
				case 9:
						imprimir(a);
						printf("\n");
						break;
				case 99:
						exit(0);
		}
	}
}
