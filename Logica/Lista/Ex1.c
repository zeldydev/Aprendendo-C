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
    int idade;
    float altura;
    char nome [50];
    printf("Qual o seu nome ?\n");
    fgets(nome,sizeof(nome), stdin);
    printf("Qual a sua idade? \n");
    scanf("%d", &idade);
    printf("Qual a sua altura? \n");
    scanf("%f", &altura);
    printf("=======FICHA DO USUÁRIO=======\n");
    printf("Nome: %s", nome);
    printf("Idade: %d\n", idade);
    printf("Altura: %.2f\n", altura);


    return 0;
}