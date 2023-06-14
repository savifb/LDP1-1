#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main(){
    printf("Hello world!!!\n");

    int n1, n2, quoc, resto;

    printf("Digite o dividendo: \n");
    scanf("%d", &n1); 
    printf("Digite o divisor: \n");
    scanf("%d", &n2); 

    quoc = n1/n2;
    resto = n1%n2; 

    printf("Resto: %d\n", resto);
    printf("Quociente: %d\n", quoc);
    printf("Dividendo: %d\n", n1);
    printf("Divisor: %d\n", n2);



    system("PAUSE");
}


