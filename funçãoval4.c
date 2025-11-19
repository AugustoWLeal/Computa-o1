#include <stdio.h>
int retornaMaior(int n1, int n2){
if(n1>n2)
    return n1;
    else if(n1<n2)
    return n2;
    else
    return n1;
}
int main()
{
    int n1, n2, n3;
    printf("Digite 3 numeros: ");
    scanf("%d %d %d", &n1, &n2, &n3);
    if ((n1 && n2) == n3)
    printf("%d", n1);
    else if(retornaMaior(n1, n2) <= n3)
    printf("%d", n3);
    else printf("%d", retornaMaior(n1, n2));

	return 0;
}
