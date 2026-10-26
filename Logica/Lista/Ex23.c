#include <stdio.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int num1, num2, soma, sub, div, multi, resto;
    printf("Insira o valor para o Primeiro Número: \n");
    scanf("%d", &num1);
    printf("Insira o valor para o Segundo Número: \n");
    scanf("%d", &num2);
    soma = num1 + num2;
    sub = num1 - num2;
    div = num1 / num2;
    multi = num1 * num2;
    resto = num1 % num2;
    printf("O Resultado da soma dos dois números é:%d \n", soma);
    printf("O Resultado da subtração dos dois números é:%d \n", sub);
    printf("O Resultado da divisão dos dois números é:%d \n", div);
    printf("O Resultado da multiplicação dos dois números é:%d \n", multi);
    printf("O Resto da divisão entre %d e %d é:%d \n", num1, num2,resto);





    return 0;
}