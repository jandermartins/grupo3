#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

struct lista{
	Cliente* c;	
	struct lista* ant;
	struct lista* prox;
}typedef struct Lista;


Lista* criaLista(){
	return NULL;
}


Lista* insere(Lista* l, Cliente* c){
	Lista* novo = (Lista*)malloc(sizeof(Lista));			
		novo->ant = NULL;
		novo->prox = l;
		novo->c = c;
		//novo->prox->ant = novo;
		if (l != NULL)
			l->ant = novo;
		return novo;	
}

Lista* insereClienteFim(Lista* l, Cliente* c){
	Lista* novo = (Lista*)malloc(sizeof(Lista));			
	Lista* aux = l;
	if(l == NULL)
		return insere(l, c);
	while(aux->prox != NULL){
		aux = prox(aux);
	}
	novo->c = c;
	novo->prox = NULL;
	novo->ant = aux;
	aux->prox = novo;
	return l;
}

Lista* busca(Lista* l, int v){
	Lista* aux = l;
	if(l == NULL) return NULL;
	while(aux != NULL && aux->num != v)
		aux = prox(aux);
		return aux;
}

Lista* retira(Lista* l, int v){
	Lista* aux = busca(l, v);
	if(aux == NULL) return l;
	if (aux->ant == NULL){
		l = prox(l);
		l->ant = NULL;
		free(aux);
		return l;
	}else{
		aux->ant->prox = prox(aux);
		if(aux->prox != NULL)
			aux->prox->ant = ant(aux);
		free(aux);
		return l;
	}
}

void libera(Lista* l){
	if (l == NULL) return;
	Lista* aux = l;
	while(l != NULL){
		Lista* aux = l;
		l = prox(l);
		free(aux);
	}

}

int vazia(Lista* l){ 
	return l==NULL;
}

void imprime(Lista* l){
	Lista * aux = l;
	while(aux != NULL){
		printf("%d \t", charParaInt(num(aux)));
		aux = prox(aux);
	}
	printf("\n");
}

Lista* prox(Lista* l){
	return l->prox;
}

Lista* ant(Lista* l){
	return l->ant;
}

char num(Lista* l){
	return l->num;
}

Lista* ultima(Lista* l1){
	Lista* aux = l1;
	while(aux->prox != NULL){
		aux = prox(aux);		
	}
	return aux;
}

int charParaInt(char c){
	return c - '0';
}

int somaInt(int num1, int num2){
	return num1 + num2;
}