#include <stdio.h>

void intercambio(int *x, int *z);

int main(int argc, char const *argv[])
{
    int a, b;
    printf("Escribe un valor para 'a': ");
    scanf("%i", &a);
    printf("Escribe un valor para 'b': ");
    scanf("%i", &b);

    intercambio(&a,&b);

    printf("El valo de a es %i y el valor de b es %i. \n\n",a,b);

    return 0;
}

void intercambio(int *x, int *z){
    
    int aux;

    aux = *x;
    *x = *z;
    *z = aux;



}
