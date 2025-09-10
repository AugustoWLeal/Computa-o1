#include <stdio.h>

int main()
{
	int fruta, i = 1;
	float valor, media, a, total = 0;
	printf("Digite a quantidade de frutas vendidads: ");
	scanf("%d", &fruta);
	for (i = 1; i<=fruta; i++) {
		printf("Digite o valor da fruta %d\n", i);
		scanf("%f", &valor);
		total = total + valor;
	}
	media = total/(i-1);
	for ( ; ; ) {
		printf("Informe um valor em reais:\n");
		scanf("%f", &a);
		if ( a <= 0) {
			break;
		}
		else if(a > media)
			printf("Errou para mais!\n");
		else if ( a < media)
			printf("Errou para menos!\n");
		else {
			printf("Acertou a media!\n");
			break;
		}
	}
	return 0;
}
