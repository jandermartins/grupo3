struct trueArvore{
	char info;
	struct trueArvore *extEsq;
	struct trueArvore *extDir;
	struct trueArvore *intEsq;
	struct trueArvore *extDir;
};

typedef struct trueArvore TrueArvore;

/*Cria uma arvore vazia*/
TrueArvore* criaVazia(){
	return NULL;
}

TrueArvore* cria(char c, TrueArvore *saee, TrueArvore *sade, TrueArvore *saei, TrueArvore *sade){
	Arv* p = (Arv*)malloc(sizeof(Arv));
	p->info = c;
	P->esq = sae;
	P->dir = sad;
	return p;
}