#include <stdio.h>
int bissexto (int ano) {
	if (ano% 4 == 0 && (ano % 100 != 0 || ano % 400 == 0)) {
		return 1;
	}
	else
		return 0;
}
int main()
{
	int ano;
	printf("Digite um ano: ");
	scanf("%d", &ano);
	if (bissexto(ano) == 1)
		printf("E um ano bissexto");
	else
		printf("Nao e um ano bissexto");
	return 0;
}
