#include <stdio.h>
int main()
{
	int i;
	float f;
	char c;

	printf("Digite um caractere: ");
	scanf("%c",&c);// complete o comando para ler a variC!vel c
	printf("Digite um valor inteiro: ");
	scanf("%d",&i); // complete o comando para ler a variC!vel i
	printf("Entre com um numero de ponto flutuante (valor nao inteiro): ");
	scanf("%f",&f);// complete o comando para ler a variC!vel f
	printf ("%c\t%d\t%f",c,i,f); // imprimeir as variC!vel

	return 0;
}
