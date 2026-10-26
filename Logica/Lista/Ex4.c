#include <stdio.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(CP_UTF8); // Configura o terminal do Windows para UTF-8 de forma limpa e profissional
    SetConsoleCP(CP_UTF8); // Configura também a entrada de texto
    int num1, num2, soma;
    num1 = 15;
    num2 = 27;
    soma = num1 + num2;

    printf("A soma de Num1 + Num2 é Igual a %d", soma);







    return 0;
}