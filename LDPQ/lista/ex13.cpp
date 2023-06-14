#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main(){
    printf("Hello world!!!\n");

    float dividendo, divisor, aux;

    printf("digite o dividendo: \n");
    scanf("%f", &dividendo);
    printf("digite o divisor: \n");
    scanf("%f", &divisor);

    aux=dividendo/divisor;

    printf("O numero decimal da fracao: %f\n ", aux);



    system("PAUSE");
}


