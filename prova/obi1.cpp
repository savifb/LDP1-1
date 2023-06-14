#include<iostream>

using namespace std;

int main(void) {
    printf("\nHello world!!!\n");

    int V, A, F, P, contatotal;

    printf("Informe o valor que o senhor tem para disponível: ");
    scanf("%d", &V );

    printf("Digite o valor da conta de acougue: ");
    scanf("%d", &A);
    printf("Digite o valor da conta da farmacia: ");
    scanf("%d", &F);
    printf("Digite o valor da conta da padaria: ");
    scanf("%d", &P);
    contatotal= A+F+P;

    if((V<=2000)&&(V>=0)&&(A>=0)&&(A<=1000)&&(F>=0)&&(F<=1000)&&(P>=0)&&(P<=1000)){
    
    //IF PARA PAGAR TODAS AS CONTAS
        if(contatotal<=V){
            printf("O valor disponível e %d", V);
            printf("Então o vovo joao consegue pagar todas as contas\n");
            //ELSE IF DE DE UM VALOR MENOR Q V.
        }else if(((V<=A) && (V<=F) && (V>=P)) || ((V<=A) && (V>=F) && (V<=P)) || ((V>=A) && (V<=F) && (V<=P))){
            printf("Com o valor disponivel %d\n vo joão so consegue pagar uma das contas\n", V);
        }else if((V<A) && (V<F) && (V<P)){
            printf("Com o valor %d \n vo joao nao consegue pagar nenhuma das contas\n");
        }else if ((V>(A+F)) || (V>(F+P)) || (V>(A+P))){
            printf("Com o saldo %d\n vo joao consegue pagar ao menos duas contas\n", V);
        }
    }else{
        printf("Foi digitado alguma conta maior que 1000 ou menor que zero\n ou O valor disponivel foi maior que 2000");
    }


    


    


   

   
    
    
    return 0;


}