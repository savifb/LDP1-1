#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main(){
    printf("\nHello world!!!\n");

    int x, y, resto;

    printf("Digite X: ");
    scanf("%d", &x);
    resto=x%2;
    
    if (resto==0){
        printf("Esse número e par");
    }else if (resto==1)
    {
         printf("Esse numero é impar;");
    }

}