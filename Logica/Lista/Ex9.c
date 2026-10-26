#include <stdio.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int num1, num2, soma,subtracao,divisao, multiplicacao;
    num1 = 20;
    num2 = 5;
    soma = num1 + num2;
    subtracao = num1 - num2;
    multiplicacao = num1 * num2;
    divisao = num1 / num2;
    printf("A soma dos dois números é igual a: %d\n", soma);
    printf("A subtração dos dois números é igual a: %d\n", subtracao);
    printf("A multiplicação dos dois números é igual a: %d\n", multiplicacao);
    printf("A divisão dos dois números é igual a: %d\n", divisao);





    return 0;
}