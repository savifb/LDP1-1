#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main(){
    printf("Hello world!!!\n");
    float horas, minutos, total_min;

    printf("Digite a hora inteira(sem os minutos): ");
    scanf("%f", &horas);
    printf("Digite os minutos dessa hora: ");
    scanf("%f", &minutos);

    total_min = (horas/60)+minutos;
    
    printf("Horas que passaram durante o dia: %f\n", total_min);


    system("PAUSE");
}


