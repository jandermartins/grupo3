#include <stdio.h>




struct cliente{
	int tempo;
	char* tipo;
	char* senha;
}typedef struct cliente Cliente;



Cliente* criaCliente(){
	return NULL;
}

Cliente* insereCliente(Lista *l, char *tipo, char *senha){
	Cliente* novo = malloc((Cliente*)sizeof(Cliente));
	novo->tipo = tipo;
	novo->senha = senha;
	return insere(l, c);
}






