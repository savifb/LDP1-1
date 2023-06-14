#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char const *argv[])
{
	
	printf("hello world \n" );
	float x, y, z, media;

    printf("Digite um numero: ");
    scanf("%f", &x); 
    printf("Digite um numero: ");
    scanf("%f", &y); 
    printf("Digite um numero: ");
    scanf("%f", &z); 

    media = (x+y+z)/3;

    if(x>y && x>z){
        printf("%.2f maior que todos\n", x);
    }else if (y>x && y>z)
    {
        printf("%.2f maior que todos\n", y);
    }else if(z>x && z>y){
        printf("%.2f maior que todos\n", z);
    }else if(x=z && x==y){
        printf("Os valores são iguais\n");
    }
    printf("A media dos numeros eh: %.2f \n ", media);





	return 0;
}