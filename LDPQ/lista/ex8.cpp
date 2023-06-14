#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main(){
    printf("Hello world!!!\n");

    float sal, reaj, sal_total;

    printf("Digite o seu salario:\n ");
    scanf("%f", &sal);


    reaj = sal * 0.01;
    sal_total= sal+reaj;

    printf("Reajuste: %f\n", reaj);
    printf("Salario total: %f\n", sal_total);

    system("PAUSE");
}


