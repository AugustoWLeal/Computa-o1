#include <stdio.h>

int main()
{
	int i, n, a, b;
	i=1;
	printf("Digite um numero: ");
	scanf("%d", &n);
	for (i=1; i<=100; i++)
	{
		if (i%n ==2) {

			printf("%d  ",i);
		}
	}
	return 0;
}
