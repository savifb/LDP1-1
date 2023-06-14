#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
main(){

    printf("Hello World!\n");

     int n1, suc, ant;
    printf("Digite o n1: \n");
    scanf("%d", &n1);

    ant= n1-1;
    suc= n1+1;

    printf("O sucessor: %d\n", suc);
    printf("O antecessor: %d\n", ant);

    system("PAUSE");


}
