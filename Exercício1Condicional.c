#include <stdio.h>
int main()
{

    int alunos, monitores, total;
    printf("digite o numero de alunos:");
    scanf("%d",&alunos);
    printf("digite o numero de monitores:");
    scanf("%d",&monitores);
    total = alunos + monitores;
    if (total<=50)
        printf("É possível levar todos em apenas uma viagem");
        else
         printf("Não é possível levar todos em apenas uma viagem");
    
	return 0;
}
