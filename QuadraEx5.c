#include <stdio.h>

int main()
{
    int a, b;
    printf("Digite a coordenada x,y de contato entre a bola e o solo: ");
    scanf("%d,%d",&a,&b);
    if ((a>432||a<0)||(b>468||b<0))
    printf("f");
    else 
    printf("d");

    return 0;
}
