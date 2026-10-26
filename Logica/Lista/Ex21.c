#include <stdio.h>
#include <windows.h>
#include <string.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    char nome;
    printf("Digite a inicial do Seu nome: \n");
    scanf("%c", &nome);
    printf("A sua inicial é: %c", nome);






    return 0;
}