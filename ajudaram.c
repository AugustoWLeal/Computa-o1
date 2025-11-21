#include <stdio.h>
void converteHora(int total_segundos, int *hora, int *min, int *seg){

*hora = total_segundos/3600;
*min = (total_segundos%3600)/60;
*seg = total_segundos%60;

}
int main()
{
    int total_segundos, hora, min, seg;
    char legal[15];
    printf("Digite o total de segundos: ");
    scanf("%d", &total_segundos);
    converteHora(total_segundos, &hora, &min, &seg);
    printf("%02d:%02d:%02d\n", hora, min, seg);
 
    scanf("%s", legal);
    printf("Continua\n");
    scanf(" %c", &legal);
    
    
    return 0;
}
