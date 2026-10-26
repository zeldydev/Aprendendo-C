#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
    system("chcp 65001 > null");
    setlocale(LC_ALL, "Portuguese");

    int idade;
    char nome[50];

    printf("Digite seu nome completo: \n");
    fgets(nome, 50, stdin);
    printf ("Digite sua idade: ");
    scanf("%d", &idade);

    if(idade >=18){
        printf("\nNome: %s", nome);
        printf("\nVocê é maior de idade. \n");

    }else{
        printf("\nNome : %s, nome\n");
        printf("\nVocê não é maior de idade\n");
    }



    return 0;
}