#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main(){
    printf("\nHello world!!!\n");

    int x, cont, neg=0, pos=0;

   

    for (cont=1; cont<=5; cont++)
    {
        printf("Digite o valor de x: ");
        scanf("%d", &x);
        if (x<0)
        {
            neg++;
        }else if (x>=0)
        {
            pos++;
        }
        
    }
    printf("%d sao negativos \n", neg);
    printf("%d sao positivos\n", pos);
    
    
    
    return 0;


}