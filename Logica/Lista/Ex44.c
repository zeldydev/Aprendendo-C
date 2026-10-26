#include <stdio.h>
#include <windows.h>

int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int idade, ingresso;

    printf("Digite a sua idade: ");
    scanf("%d", &idade);
    printf("\nVocê Possui Ingresso?\n");
    printf("Use 1-Sim 2-Nao\n");
    scanf("%d", &ingresso);
    if(idade >= 18){
        printf("Você é maior de idade\n");
        if(ingresso == 1){printf("Entrada liberada");}
        else{printf("Entrada negada, você não possui ingresso");}
    }else{printf("Você é menor de idade, entrada negada");}





    return 0;
}