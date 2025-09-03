#include <stdio.h>

int main()
{
	int n, i = 1;
	float a, b, c, media;

	printf("digite o numero de testes desejados: \n");
	scanf("%d", &n);
	for(i=1; i<=n; i++) {
		printf("digite tres numeros: \n");
		scanf("%f %f %f", &a, &b, &c);
		media = (a*2.0+b*3.0+c*5.0)/10;
		printf("a media ponderada e: %.2f\n", media);
	}
	return 0;
}
