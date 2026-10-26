#include <stdio.h>
#include <windows.h>

int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int nota,frequencia;

    printf("Insira o valor da nota:");
    scanf("%d", &nota);
    printf("Insira a frequencia:");
    scanf("%d", &frequencia);

    if(nota >= 7){
        if(frequencia >= 75){
            printf("Aprovado");
        }
        else{printf("Reprovado por frequencia insuficiente");}
    }
    else{printf("Reprovado");}



    return 0;
}