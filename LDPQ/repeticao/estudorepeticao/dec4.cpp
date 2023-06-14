#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    printf("Hello World!");

    float s=0, i;

    for (i=1; i<=50; i++)
    {
        s= s+(2*i-1)/i;
        printf("%f\n", s);
    }
    printf("%f", s);
    



    return 0;
}
