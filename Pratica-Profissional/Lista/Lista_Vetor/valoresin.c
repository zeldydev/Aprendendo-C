#include <stdio.h>
#include <windows.h>

/*Crie um programa em C que leia 6 números inteiros, armazene todos em um vetor e,
 depois da leitura, mostre os 6 números na mesma ordem em que foram digitados.
*/
int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int i;
    int valores[6];

    for(i = 0; i < 6; i++){
        printf("Digite um valor para o %d° Número: ", i + 1);
        scanf("%d",&valores[i]);
    }
    printf("Os valores digitados em Ordem inversa são:");
    for(i = 5; i >= 0; i--){
        printf("\n%d",valores[i]);
    }






    return 0;
}