#ifndef BST_H
#define BST_H

typedef struct livro {
	char titulo[81];
	char autor[51];
	char isbn[21];
	int codigo;
} tipo_dado;


//typedef int tipo_dado;

typedef struct no_bst {
	tipo_dado *dado;
	struct no_bst *esq, *dir;
} no_bst;

typedef no_bst * arvore;

void inicializar(arvore *raiz);
arvore adicionar (tipo_dado *valor, arvore raiz);
int altura(arvore raiz);
int maior(int a, int b);
tipo_dado * maior_elemento(arvore raiz);
tipo_dado * menor_elemento(arvore raiz);
void pre_order(arvore raiz);
void pos_order(arvore raiz);
void in_order(arvore raiz);
arvore remover (int valor, arvore raiz);
void imprimir_elemento(arvore raiz);
tipo_dado * ler_dados();
void tirar_enter(char *string);

void salvar_arquivo(char *nome, arvore a);
void salvar_auxiliar(arvore raiz, FILE *arq);
arvore carregar_arquivo(char *nome, arvore a);




#endif
