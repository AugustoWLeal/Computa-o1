#include <stdio.h>
#include <math.h>

int main()
{
	float a, b, c;
	printf("Digite os 3 lados do triangulo: ");
	scanf("%f %f %f",&a,&b,&c);
	if ((a+b)<=c || (a+c)<=b || (b+c)<=a)
		printf("Nao e um triangulo");
	else if (a==b && a==c)
		printf("O triangulo e equilatero");
	else if(a!=b && a!=c && b!=c)
		printf("O triangulo e escaleno");
	else
		printf("O triangulo e isosceles");
	return 0;
}
