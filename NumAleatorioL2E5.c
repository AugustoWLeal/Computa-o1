#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int n, a, i = 1;
	int rand (void) __THROW;
	srand(time(NULL));
	n = rand() %500 + 1;
	printf("adivinhe o numero entre 1 e 500\n");
	for(i=1; 1<=500; i++) {
		scanf("%d", &a);
		if (a==n)
			break;
		else if (a>n)
			printf("digite um valor menor: ");
		else
			printf("digite um valor maior: ");
	}
	printf("Voce acertou em %d tentativas\t", i);
	if (i<=3)
		printf(" \\o/ ");
	else if (i>3 && i<7)
		printf(":-D");
	else if (i>=7 && i<11)
		printf(":-)");
	else printf(":-\\ ");


	return 0;
}

