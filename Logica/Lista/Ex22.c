#include <stdio.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int num1, num2, soma;
    printf("Insira o valor para o Primeiro Número: \n");
    scanf("%d", &num1);
    printf("Insira o valor para o Segundo Número: \n");
    scanf("%d", &num2);
    soma = num1 + num2;

    printf("A soma dos dois números é igual a: %d", soma);





    return 0;
}