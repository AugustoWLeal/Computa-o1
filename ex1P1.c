#include <stdio.h>

int main()
{
	int quantidade1, quantidade2;
	float valor;
#define PRIMEIRA 1
#define ULTIMA 12

	printf("Digite a quantidade 1: ");
	scanf("%d", &quantidade1);
	printf("Digite a quantidade 2: ");
	scanf("%d", &quantidade2);
	valor = (quantidade1 + quantidade2)*(ULTIMA - PRIMEIRA)/2;
	if ( valor>quantidade1) {
		printf("O resultado e %f e as quantidades sao %d e %d", valor, quantidade1, quantidade2);
	}
	else {
		valor*0.8;
		printf("O resultado e %f e as quantidades sao %d e %d", valor*0.8, quantidade1, quantidade2);
	}



	return 0;
}
