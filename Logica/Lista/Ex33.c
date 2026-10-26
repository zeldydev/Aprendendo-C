#include <stdio.h>
#include <windows.h>

int main (){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int idade, ingresso;

    printf("Digite sua idade: \n");
    scanf("%d", &idade);
    printf("Voce possui ingresso ?\n");
    printf("Use 1-Sim 2-Nao\n");
    scanf("%d", &ingresso);
    
    if (idade >= 18 && ingresso == 1){
        printf("Entrada Permitida");
    }
    else{
        printf("Entrada não Permitida");
    }


    return 0;
}