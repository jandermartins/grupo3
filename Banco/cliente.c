#include <stdio.h>




struct cliente{
	int tempo;
	struct char* tipo;
	struct char* senha;
}typedef struct cliente Cliente;



Cliente* criaCliente(){
	return NULL;
}

Cliente* insereCliente(Lista* l, TipoCliente* tipo, Senha* s, Cliente* c){
	Cliente* novo = malloc((Cliente*)sizeof(Cliente));
	novo.tipo = tipo;
	novo.senha = s;
	return insere(l, c);
}






