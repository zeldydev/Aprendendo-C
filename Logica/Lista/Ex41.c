#include <stdio.h>
#include <windows.h>

int main (){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int menu;

    printf("Insira o número referente a opção desejada:\n");
    printf("1 - Saldo\n");
    printf("2 - Deposito\n");
    printf("3 - Saque\n");
    printf("4 - Sair\n");
    scanf("%d", &menu);
    switch(menu){
        case 1:
            printf("Você escolheu a opção de ver o Saldo");
            break;
        case 2:
            printf("Você escolheu a opção de Depositar");
            break;
        case 3:
            printf("Você escolheu a opção de sacar");
            break;
        case 4:
            printf("Você escolheu sair");
            break;
        default:
            printf("Opção Inválida");
            break;




    }
    return 0;
}