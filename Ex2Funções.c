#include <stdio.h>
int arredonda (float x) {
	return x/1;
}
int main()
{
	float x;
	printf("Digite um numero: ");
	scanf("%f", &x);
	if (x>=0) {
		if(x - arredonda(x) >= 0.5)
			printf("%d", arredonda(x) + 1);
		else
			printf("%d", arredonda(x));
	}
	else if(x - arredonda(x) <= -0.5)
		printf("%d", arredonda(x) -1);
	else
		printf("%d", arredonda(x));
	return 0;
}
