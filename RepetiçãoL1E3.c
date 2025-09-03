#include <stdio.h>

int main()
{
	int n, i = 1;
	float a, b, c, media;

	printf("Digite a quantidade de testes desejada: ");
	scanf("%d", &n);
	printf("digite tres numeros para cada teste:\n");
	for(i=1; i<=n; i++) {
		scanf("%f %f %f", &a, &b, &c);
		media = (a*2.0+3.0*b+c*5.0)/10;
		printf("A media ponderada e: %.2f \n", media);

	}
	return 0;
}
