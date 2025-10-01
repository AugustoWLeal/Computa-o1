#include <stdio.h>
int calculaDigitoVerificador(int num, int a, int b, int c) {
	a = num%10;
	b = (num%100 - a) / 10;
	c = (num - a - (b*10))/100;
	return ((a * 3 + 2 * b + c)%11)%10;
}
int main()
{
	int num, a, b, c;
	printf("digite um numero: ");
	scanf("%d", &num);
	printf("%d", calculaDigitoVerificador(num, a, b, c));
	return 0;
}
