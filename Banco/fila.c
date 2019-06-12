#include <stdio.h>
#include <stdlib.h>
#include "lista.h"
#include "fila.h"

struct fila{
	Lista *inicio;
	Lista *fim;
}typedef struct fila Fila;

Fila *criaFila(){
	Fila *f = (Fila*)malloc(sizeof(Fila));
	f->inicio = NULL;
	f->fim = NULL;
	return f;
}

void insereFila(Fila *f, Cliente* c){
	Lista *novo = (Lista*)malloc(sizeof(Lista));
	novo->cliente = c;
	novo->prox = NULL;
	if(f->fim != NULL)
		f->fim->prox = novo;
	else
		f->inicio = novo;
		f->fim = novo;
}

int filaVazia(Fila *f){
	return (f->inicio == NULL);
}

float remova(Fila *f){
	Lista *t;
	float valor;
	if(filaVazia(f)){
		printf("Fila vazia!\n"); 
		exit(1);
	}
	t = f->inicio;
	valor = t->x;
	f->inicio = t->prox;
	if(f->inicio == NULL)
		f->fim = NULL;
		free(t);
	return valor;
}

void filaLibera(Fila *f){
	Lista *q = f->inicio;
	while(q != NULL){
		Lista *t = q->prox;
		free(q);
		q = t;
	}
	free(f);
}

void filaImprime(Fila *f){
	Lista *q;
	for(q = f->inicio;q != NULL; q = q->prox){
	printf("%.2f\n", q->num);
	}
}

void combinaFila(Fila *fr,Fila *f1, Fila *f2){
	if(filaVazia(f1)){
		fr->inicio = f2 ->inicio;
		fr->fim = f2 -> fim;
		filaLibera(f1);
		filaLibera(f2);
		exit(1);
	}	
	if (filaVazia(f2)){
		fr->inicio = f1->inicio;
		fr->fim = f1->fim;
		filaLibera(f1);
		filaLibera(f2);
		exit(1);
	}	
	Lista *q1;
	Lista *q2;
		
	while(f1 != NULL && f2 != NULL){
		q1 = f1->inicio;
		q2 = f2->inicio;
		if(filaVazia(f2))
			insereFila(fr, q1->num);
		if(filaVazia(f1))
			insereFila(fr, q2->num);
		else{
			insereFila(fr, q1->num);
			insereFila(fr, q2->num);
		}	
		float t1;
		t1 = remova(f1);
		float t2;
		t2 = remova(f2);
	}
	free(q1);
	free(q2);	
}