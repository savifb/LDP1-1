#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <cstdlib>
main()
{
    printf("Hello world!!!\n");
    int a, b, c;
    printf("Digite o lado A do triangulo: \n");
    scanf("%d", &a);
    printf("Digite o lado b do triangulo: \n");
    scanf("%d", &b);
    printf("Digite o lado c do triangulo: \n");
    scanf("%d", &c);
    

    if((a<=b+c)&&(b<=c+a)&&(c<=b+a)){

        if((a==b && c!=a) || (b==c && a!=b) || (a==c && b!=c)){
            printf("O triangulo eh isosceles!\n");
        }else if(a!=b && b!=c && a!=c){
            printf("Esse triangulo eh escaleno!!!\n");
        }else if (a==b && b==c)
        {
            printf("Esse triangulo eh equilatero!!!\n");
        }

    }else{
        printf("Um dos valores é maior que a soma dos outros dois valores\n");
         system("PAUSE");
    }

   system("PAUSE");
}
