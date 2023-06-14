#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main()
{
    /* code */


    printf("Hello world!!!\n");


    float qtd_produto, preco_unitario, preco_total, valor_final, desconto, bonus;

    printf("Digite a quantidade comprada do produto: ");
    scanf("%f", &qtd_produto);
    printf("Digite o valor unitario do produto ");
    scanf("%f", &preco_unitario);
    //preço total do produto
    preco_total=qtd_produto*preco_unitario;
    printf("Voce é um cliente pobre\n");

    if(preco_total<100)
    {
        desconto=preco_total*0.05;
        valor_final=preco_total-desconto;
        printf("Voce teve um desconto de: %.2f\n", desconto);
        printf("Logo, o valor final deu: %.2f\n", valor_final);
        printf("Voce e um quase pobre\n");
        
    }
    else if(preco_total>=100 && preco_total<=1000)
    {
        desconto=preco_total*0.05;
        valor_final=preco_total-desconto;
        bonus=valor_final*0.05;
        printf("Voce teve um desconto de: %.2f\n", desconto);
        printf("Logo, o valor final deu: %.2f\n", valor_final);
        printf("E possui um bonus de: %.2f\n", bonus);
        printf("Olha so... ta quase vip\n");
        
    }
    else if(preco_total>1000)
    {
        desconto=preco_total*0.10;
        valor_final=preco_total-desconto;
        bonus=valor_final*0.07;
        printf("Voce teve um desconto de: %.2f\n", desconto);
        printf("Logo, o valor final deu: %.2f\n", valor_final);
        printf("E possui um bonus de: %.2f\n", bonus);
        printf("Parabens, voce e cliente VIP");
    }



    system("PAUSE");
}