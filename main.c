#include <stdio.h>

void intercambio(int *x, int *z);

int main(int argc, char const *argv[])
{
    int a, b;

    //Pido por teclado ingresen valor para variable a
    printf("Escribe un valor para 'a': ");
    scanf("%i", &a);
    //Pido por teclado ingrese valor para la variable b
    printf("Escribe un valor para 'b': ");
    scanf("%i", &b);

    //Llamo a la finción para intercambiar valores
    intercambio(&a,&b);

    // Imprimo por pantalla los valores intervambiados
    printf("El valo de a es %i y el valor de b es %i. \n\n",a,b);

    return 0;
}

// Funcio para cambiar valores, no devuelve datos.
void intercambio(int *x, int *z){ // los parámetros son punteros, apuntan a las memorias de variables
    
    int aux; // variable auxiliar para cambiar valor

    aux = *x;
    *x = *z;
    *z = aux;



}
