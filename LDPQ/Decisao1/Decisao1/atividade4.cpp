#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main(){
    printf("\nHello world!!!\n");

    float x, y; 

    printf("Digite o valor de x: ");
    scanf("%f", &x);
    printf("Digite o valor de y: ");
    scanf("%f", &y);

    if (x>y)
    {
        printf("O maior valor é: %.2f\n", x);
    }else if(x<y)
    {
        printf("O maior valor é: %.2f\n", y);
    }else{
        printf("Os valores são iguais\n");
    }
    

    system("PAUSE");
}