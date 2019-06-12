typedef struct fila Fila;

Fila *criaFila();
void insereFila(Fila *f, float valor);
int filaVazia(Fila *f);
float remova(Fila *f);
void filaImprime(Fila *f);
void filaLibera(Fila *f);
void combinaFila(Fila *Fr,Fila *f1, Fila *f2);
