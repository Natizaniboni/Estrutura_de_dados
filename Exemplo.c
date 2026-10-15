#include <stdio.h>

typedef struct No{
    int valor;

    struct No *proximo;


} No;
/*
int main(){
    No primeiro;
    No segundo;
    primeiro.valor = 10;
    primeiro.proximo = NULL;

    segundo.valor = 20;
    segundo.proximo = NULL;

    printf("O primeiro valor é %d\n", primeiro.valor);
    printf("O segundo valor é %d\n", segundo.valor);

    return 0;

}
*/
int main(){
    No primeiro;
    No segundo;

    primeiro.valor = 10;
    segundo.valor = 20;

    primeiro.proximo = &segundo;
    segundo.proximo = NULL;

    printf("%d\n", primeiro.proximo->valor);
    return 0;
}