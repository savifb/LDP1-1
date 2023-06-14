#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
main(){
    printf("Hello world!!!\n");

    float n1, n2, n3, media;

    
    printf("Digite n1:");
    scanf("%f", &n1);

    printf("Digite n2:");
    scanf("%f", &n2);
 
    printf("Digite n3:");
    scanf("%f", &n3);

    media = (n1+n2+n3)/3;

    printf("Media:%f\n", media);


    system("PAUSE");

    
}