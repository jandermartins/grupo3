
typedef struct lista Lista;
/*FUNÇÕES TAD*/
Lista* cria();
Lista* insere(Lista* l, int v);
Lista* insereFim(Lista* l, int v);
Lista* busca(Lista* l, int v);
Lista* retira(Lista* l, int v);
void libera(Lista* l);
int vazia(Lista* l);
void imprime(Lista* l);
Lista * prox(Lista* l);
char num(Lista* l);
Lista* ant(Lista* l);
Lista* ultima(Lista* l1);
int somaInt(int num1, int num2);
int charParaInt(char c);
int somaInt(int num1, int num2);