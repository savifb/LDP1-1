#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main(){
    printf("Hello world!!!\n");

    float b, h, perim, area; 
    
    printf("Digite a base: ");
    scanf("%f", &b);
    printf("Digite a altura: ");
    scanf("%f", &h);

    perim = 2*(b+h);
    area = b*h;

    printf("Perimetro do retangulo: %f\n", perim);
    printf("Area do retangulo: %f\n", area);
    

    system("PAUSE");
}


