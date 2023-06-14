#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main(){
    printf("\nHello world!!!\n");

     int num; 

     printf("Digite o numero do respectivo mes: \n");
     scanf("%d", &num);

        switch (num)
        {
        case 1:
            printf("Esse numero corresponde ao mes de janeiro: \n");
            break;
        case 2:
            printf("Esse numero corresponde ao mes de fevereiro: \n");
            break;
        case 3:
            printf("Esse numero corresponde ao mes de marco: \n");
            break;
        case 4:
            printf("Esse numero corresponde ao mes de abril: \n");
            break;
        case 5:
            printf("Esse numero corresponde ao mes de maio: \n");
            break;
        case 6:
            printf("Esse numero corresponde ao mes de junho: \n");
            break;
        case 7:
            printf("Esse numero corresponde ao mes de julho: \n");
            break;
        case 8:
            printf("Esse numero corresponde ao mes de agosto: \n");
            break;
        case 9:;
            printf("Esse numero corresponde ao mes de setembro: \n");
            break;
        case 10:
            printf("Esse numero corresponde ao mes de outubro: \n");
            break;
        case 11:
            printf("Esse numero corresponde ao mes de novembro: \n");
            break;
        case 12:
            printf("Esse numero corresponde ao mes de dezembro: \n");
            break;
        
        default: printf("Mes invalido.\n Escolha numero entre 0 a 12.\n");
            break;
        }
     

    system("PAUSE");
}