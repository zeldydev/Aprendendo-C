#include <stdio.h>
#include <windows.h>

int main (){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int idade, documento;

    printf("Digite sua idade: \n");
    scanf("%d", &idade);
    printf("Voce possui Documento ?\n");
    printf("Use 1-Sim 2-Nao\n");
    scanf("%d", &documento);
    
    if (idade >= 18 && documento == 1){
        printf("Entrada Permitida");
    }
    else{
        printf("Entrada não Permitida");
    }


    return 0;
}