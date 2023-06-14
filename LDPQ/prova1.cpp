#include<iostream>

using namespace std;

int main(void) {
	printf("hello world \n" );
	int x, resto; 

	printf("Digite um numero inteiro: ");
	scanf("%d", &x);
	resto = x%2;

	if (x>=0){
		printf("esse numero eh positivo\n");
		if (resto==0)
		{
			printf("Esse numero eh par\n");
		}else if (resto==1)
		{
			printf("Esse numero eh impar\n");
		}

	}else{
		printf("Esse numero eh negativo\n");
		if (resto==0)
		{
			printf("Esse numero eh par\n");
		}else if (resto==1)
		{
			printf("Esse numero eh impar\n");
		}	
	}

	return 0;
}
