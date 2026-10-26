#include <stdio.h>
#include <windows.h>

int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    char operacao;

    printf("Escolha um caracter:  +, -, * ou / \n");
    scanf(" %c", &operacao);
    
    switch(operacao){
        
        case '+':
        printf("Operação selecionada: Adição\n");
        break;
        case '-':
        printf("Operação selecionada: Subtração\n");
        break;
        case '*':
        printf("Operação selecionada: Multiplicação\n");
        break;
        case '/':
        printf("Operação selecionada: Divisão\n");
        default:
        printf("Opção Inválida");
        break;
    }

    return 0;
}