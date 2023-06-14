#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main()
{
    int A, B, C;
    printf("Atribua um valor para A: ");
    scanf("%d", &A);
    printf("Atribua um valor a B: ");
    scanf("d%", &B);

    C=A;
    A=B;
    B = C;

    printf("O valor de A é: d% ", A);
    printf("O valor de B é: d% ", B);

    system("PAUSE");

}