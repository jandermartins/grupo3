typdef struct pilha Pilha;

Pilha* inicializarPilha();
int pilhaVazia(Pilha* p);
int pilhaCheia(Pilha* p);
Pilha* empilha(Pilha* p, float v);
void desempilha(Pilha* p);
void libera(Pilha* p);
float leTopo(Lista* p);
