#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main()
{
	printf("Alo Mundo!!");
	int n1,n2,n3,n4,n5, media;
	
	printf("Digite o n�mero 1:" );
	scanf("%d", &n1);
	printf("Digite o n�mero 2:" );
	scanf("%d", &n2);
	printf("Digite o n�mero 3:" );
	scanf("%d", &n3);
	printf("Digite o n�mero 4:" );
	scanf("%d", &n4);
	printf("Digite o n�mero 5:" );
	scanf("%d", &n5);
	
	media=(n1+n2+n3+n4+n5)/5;
	
	printf("A media � : %d ",media);
	

	system("PAUSE");
}
