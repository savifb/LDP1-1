#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main(){
    printf("\nHello world!!!\n");

    int x, y, diferenca;

    printf("Digite X: ");
    scanf("%d", &x);
    printf("Digite Y: ");
    scanf("%d", &y);
    
    if (x>=y){
        diferenca=x-y;
        printf("Diferenca: %d\n",diferenca);
    }else if (y>x)
    {
        diferenca=y-x;
        printf("Diferenca: %d\n", diferenca);
    }


    
    

    


    system("PAUSE");
}


