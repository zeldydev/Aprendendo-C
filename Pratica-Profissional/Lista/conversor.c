#include <stdio.h>
// converter 7385 para horas, minutos e segundos
int main(){
    int segundos,minutos, horas;
    segundos = 7385;
    minutos = segundos / 60;
    horas = minutos / 60;
    
    printf("Segundos: %d\n", segundos);
    printf("Minutos: %d\n", minutos);
    printf("Horas: %d\n", horas);


    return 0;
}