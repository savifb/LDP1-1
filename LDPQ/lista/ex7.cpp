#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main(){
    printf("Hello world!!!\n");

    float n1, n2, n3, n4, mp;

    printf("Digite o n1:\n ");
    scanf("%f",&n1);
    printf("Digite o n2:\n");
    scanf("%f",&n2);
    printf("Digite o n3:\n ");
    scanf("%f",&n3);
    printf("Digite o n4:\n");
    scanf("%f",&n4);

    mp = (n1*1)+(n2*2)+(n3*3)+(n4*4)/1+2+3+4;

    printf("Media ponderada: %f\n", mp);

    system("PAUSE");
}


