#include <stdio.h>
#include <windows.h>

int main (){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int num1,num2;
    printf("Digite o valor do Primeiro Número:\n");
    scanf("%d", &num1);
    printf("\nDigite o valor do Segundo Número:");
    scanf("%d", &num2);
    printf("O Valor digitado para o Primeiro Número é: %d\n", num1);
    printf("O Valor digitado para o Segundo Número é: %d\n", num2);

    return 0;
}