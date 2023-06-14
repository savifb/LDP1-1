#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main(){
    printf("Hello world!!!\n");

    float raio, perim, area;

    printf("Digite o raio do circulo: \n");
    scanf("%f", &raio);

    perim=2*3.14*raio;
    area=3.14*pow(raio,2);

    printf("Perimetro: %f\n", perim);
    printf("Area: %f\n", area);



    system("PAUSE");
}


