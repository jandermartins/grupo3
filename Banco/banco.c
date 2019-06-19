#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "lista.h"
#include "fila.h"






void classificaPrioridade(Lista* l, fila* f){
	Lista* aux = l;
	while(l != NULL){
		if(strcomp(l->c->tipo, "PNE"))
			insereFila(f, l->c);		
	}
	while(aux != NULL){
		if(strcomp(l->c->tipo, "NPNE"))
			insereFila(f, l->c);
	}
}

void acessaCaixa(Fila* f, Caixa* c){
	if(verificaCaixaOcupado(c))
}