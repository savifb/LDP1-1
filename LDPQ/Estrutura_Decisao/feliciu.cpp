#include <stdio.h>
#include <stdlib.h>
#include <math.h>



main()
{
   
   
   


    printf("Hello World!!!!\n");
    float n1,n2,n3,n4,n5, media;
    string aluno[10]="Aprovado";
     
    

    printf("Digite a nota 1 do aluno: \n" );
    scanf("%f", &n1);
    printf("Digite a nota 2 do aluno: \n" );
    scanf("%f", &n2);
    printf("Digite a nota 3 do aluno: \n" );
    scanf("%f", &n3);
    printf("Digite a nota 4 do aluno: \n" );
    scanf("%f", &n4);
    printf("Digite a nota 1 do aluno: \n" );
    scanf("%f", &n5);

    media = (n1+n2+n3+n4+n5)/5;

   if(media>=6){
      aluno = "Aprovado";
      scanf("%c", &aluno);
   }
   else{
      aluno = "Aprovado";
      scanf("%c", &aluno);
   }
 
   printf("aluno: %s", aluno);

    system("PAUSE");

}