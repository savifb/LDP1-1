#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main(){
    printf("Hello world!!!\n");

    float prest, val, taxa, tempo; 

    printf("Digite o valor da compra: \n ");
    scanf("%f", &val);
    printf("Digite a taxa de juros da compra: \n");
    scanf("%f", &taxa);
    printf("Digite o tempo que esta em atraso(meses): \n");
    scanf("%f", &tempo);

    prest=val+(val*taxa/100)*tempo; 

    printf("O valor da prestacao: %f\n", prest);

    system("PAUSE");
}


