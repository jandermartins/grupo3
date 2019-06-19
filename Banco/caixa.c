#include <stdio.h>

struct caixa{
	int id;
	int ocupado;
	Caixa* proxCaixa;
}typedef struct caixa Caixa;


Caixa* criaCaixa(){
	return NULL;
}

Caixa* insereCaixa(int id){
	Caixa* novo = (*Caixa)malloc(sizeof(Caixa));
	novo->id;
	return novo;
}
/*1 para vazio e -1 para ocupado*/
void verificaCaixaOcupado(Caixa* c){
	if(c->ocupado == -1)
		return -1;
	else
		return 1;
}



