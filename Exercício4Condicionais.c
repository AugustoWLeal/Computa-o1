#include <stdio.h>
int main()
{

	int perimetro, area, base, altura;

	printf("Digite a base do retangulo:");
	scanf("%d", &base);
	printf("Digite a altura do retangulo:");
	scanf("%d", &altura);
	area = base * altura;
	perimetro = 2*base + 2*altura;
	if (perimetro == area)
		printf("O perimetro(%d) eh igual a area(%d)", perimetro, area);
	else {
		if (perimetro>area)
			printf("O perimetro(%d) eh maior que a area(%d)", perimetro, area);
		else
			printf("o perimetro(%d) eh menor que a area(%d)", perimetro, area);
	}
	return 0;
}
