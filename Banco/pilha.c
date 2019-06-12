#include <stidio.h>

#define N 50;

struct pilha{
	float v;
	Lista* topo;	
}typedef Pilha;

struct pilha{
	float v;
};

Pilha* inicializarPilha(){
	return NULL;
}

int pilhaVazia(Pilha* p){
	return p==NULL;
}

int pilhaCheia(Pilha* p){
	if()
}

Pilha* empilha(Pilha* p, float v){
	Pilha* novo = p;
	novo->v = v;
	novo = novo->topo;
	return novo;
}

void desempilha(Pilha* p){
	Pilha* aux = p;
	while(p != NULL){
		aux = aux->
	}
}