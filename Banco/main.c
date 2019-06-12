#include <stdio.h>
#include <stdlib.h>
#include "lista.h"
#include "fila.h"

//typedef struct lista Lista;
//typedef struct fila Fila;

int main(){
	Fila *f1 = criaFila();
	Fila *f2 = criaFila();
	Fila *fr = criaFila();
	insereFila(f1,2.1);
	//insereFila(f1,4.5);
	//insereFila(f1,1.0);
	insereFila(f2,7.2);
	insereFila(f2,3.1);
	insereFila(f2,9.8);
	filaImprime(f1);
	filaImprime(f2);
	printf("\n\n");
	
	combinaFila(fr,f1,f2);
	filaImprime(fr);
	return 0;
}