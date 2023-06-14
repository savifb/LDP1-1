#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main(){
  
    int x;
    printf("1. inclusão\n");
    printf("2. alteração\n");
    printf("3. exclusão\n");
    printf(" Digite sua opção:");
    scanf("%d", &x);
    switch(x)
    {
    case 1:
    printf("escolheu inclusão\n");
    break;
    case 2:
    printf("escolheu alteração\n");
    break;
    case 3:
    printf("escolheu exclusão\n");
    break;
    default:
    printf("opção inválida\n");
    }
    }

    
    

    