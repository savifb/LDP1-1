#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main(){
    printf("Hello world!!!\n");

    float base, altura, area_trian;

    printf("Digite a base: \n");
    scanf("%f",  &base);

    printf("Digite a altura: \n");
    scanf("%f",  &altura);

    area_trian = (base*altura)/2;

    printf("Area do triangulo: %f\n", area_trian);

    system("PAUSE");
}


