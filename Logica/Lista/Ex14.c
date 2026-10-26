#include <stdio.h>
#include <windows.h>

int main (){
int segundos, totalsegundos, minutos;
totalsegundos = 3675;
minutos = totalsegundos / 60;
segundos = totalsegundos % 60;
printf("Total de Segundos: %d\n", totalsegundos);
printf("Minutos Completos: %d\n", minutos);
printf("Segundos Restantes: %d\n", segundos);






    return 0;
}