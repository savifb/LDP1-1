#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main(){
    printf("\nHello world!!!\n");

       int ano, idade; 
    
    printf("Digite o ano que você nasceu: \n");
    scanf("%d", &ano);

    idade = 2023 - ano; 
    printf("Sua idade eh: %d\n", idade);

    if (idade<18)
    {
        printf("Voce e menor de idade\n");
        if (idade>=15)
        {
        printf("Voce tem entre 15 e 18 anos!\n");
        }   
        else
        {
        printf("Voce e menor de 15 anos!\n");
        }
    }
    else
    {
        printf("Voce e maior de idade!!!!!\n");
    
    }
    
    

    system("PAUSE");
}