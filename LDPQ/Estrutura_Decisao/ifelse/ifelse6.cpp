#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <cstdlib>
main()
{
    printf("Hello World\n");

    float a, c, hipotenusa;

    printf("Digite o lado A do triangulo: \n");
    scanf("%f", &a);
    printf("Digite o lado A do triangulo: \n");
    scanf("%f", &c);

    hipotenusa= sqrt(pow(a,2)+pow(c,2));

    if (hipotenusa<=100){
        printf("A hipotenusa eh: %.2f \n", hipotenusa);
    }else{
        printf("Hipotenusa muito Grande!\n");
    }
    
    
    
    
    
    
    system("PAUSE");
}