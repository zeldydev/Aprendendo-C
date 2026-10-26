#include <stdio.h>
#include <windows.h>

int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int escolha;

    printf("Escolha uma das opções:\n");
    printf("1 - Jogar\n");
    printf("2 - Configurações\n");
    printf("3 - Sair\n");
    scanf("%d", &escolha);

    switch(escolha){
        
        case 1:
        printf("Você selecionou a opção Jogar ");
        break;
        case 2:
        printf("Você selecionou a opção Configurações ");
        break;
        case 3:
        printf("Você selecionou a opção Sair ");
        break;
        default:
        printf("Opção Inválida");
        break;
    }

    return 0;
}