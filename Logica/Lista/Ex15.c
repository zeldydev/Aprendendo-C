#include <stdio.h>
#include <windows.h>

    int main (){
    int totalsegundos,segundos,minutos,horas, resto;
    totalsegundos = 7384;
    horas = totalsegundos / 3600;
    resto = totalsegundos % 3600;
    minutos = resto / 60;
    segundos = resto % 60;
        printf("Se passaram %d horas\n", horas);
        printf("%d Minutos\n", minutos);
        printf("E %d Segundos\n", segundos);



    return 0;
}