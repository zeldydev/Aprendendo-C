#include <stdio.h>
#include <windows.h>
#include <string.h>
#include <locale.h>
#include <stdlib.h>

int main(){
    system("chcp 65001 > nul");
    setlocale(LC_ALL, "Portuguese");
    SetConsoleOutputCP(CP_UTF8); // Configura o terminal do Windows para UTF-8 de forma limpa e profissional
    SetConsoleCP(CP_UTF8); // Configura também a entrada de texto
    int idade = 19;
    float altura = 1.78;
    char inicial = 'G';
    printf("Inicial: %s", inicial);
    printf("Idade: %d\n", idade);
    printf("Altura: %.2f\n", altura);


    return 0;
}