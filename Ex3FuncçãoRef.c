#include <stdio.h>
void converteHora(int totalsegundos, int *hora, int *min, int *seg);
    
int main()
{
    int totalsegundos, hora, min, seg;
    
    printf("Digite um valor em segundos: \n");
    scanf("%d", &totalsegundos);
    converteHora((int) totalsegundos, &hora, &min, &seg);
    printf("tempo convertido: %02d:%02d:%02d\n", hora, min , seg);

    return 0;
}
void converteHora(int totalsegundos, int *hora, int *min, int *seg){
    *hora = totalsegundos/3600;
    *min = (totalsegundos%3600)/60;
    *seg  = totalsegundos %60;
}
