#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <cstdlib>
main()
{
    printf("Hello World\n");

    int x, resto;
    float raiz, pot; 
    printf("Digite o valor de x: \n");
    scanf("%d", &x);
    resto = x%2;

    if(resto==0){
        printf("O valor %d eh par \n", x);
        raiz = sqrt(x);
        printf("A raiz de %d eh %.2f \n", x, raiz);
    }else{
        printf("O valor %d eh impar\n", x);
        pot = pow(x,2); 
        printf("A potencia de %d eh %.2f \n", x, pot);
    }

   


   system("PAUSE");
}