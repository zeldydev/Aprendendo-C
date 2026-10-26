#include <stdio.h>
#include <windows.h>

/*Crie um programa em C que leia 6 números inteiros,
 armazene-os em um vetor e mostre a soma de todos os valores.*/

int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int i;
    int valores[6];
    int soma = 0;

    for(i = 0; i < 6; i ++){
        printf("Digite o %d° Valor para ser somado: ", i + 1);
        scanf("%d", &valores[i]);

        soma += valores[i];
    }
    printf("O Valor dos números somados do vetor é igual a :%d", soma);



    return 0;
}