#include <stdio.h>
#include <windows.h>

    int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int hora, minutos;
    printf("Insira a Hora:");
    scanf("%d", &hora);
    printf("Insira os minutos:");
    scanf("%d", &minutos);
    if(hora >= 0 && hora <= 23 && minutos >= 0 && minutos <=  59){
    printf(" Horário válido\n");
    if(hora >= 00 && hora <= 05){
        printf("Madrugada\n");
        if(minutos == 00){printf("Horário Cheio");}
    }
    else if(hora >= 06 && hora <= 11){
        printf("Manhã\n");
        if(minutos == 00){printf("Horário Cheio");}
    }
    else if(hora >= 12 && hora <= 17){
        printf("Tarde\n");
        if(minutos == 00){printf("Horário Cheio");}
    }
    else if(hora >= 18 && hora <= 23){
        printf("Noite\n");
        if(minutos == 00){printf("Horário Cheio");}
    }
}
else{printf("Horário Inválido");}




    return 0;
}