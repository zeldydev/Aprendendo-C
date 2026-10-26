#include <stdio.h>
#include <windows.h>

int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int numero, soma;

    soma = 0;

    while(1){

        printf("\nDigite um número para ser somado: ");
        scanf("%d", &numero);
        if(numero == 0){break;}
        else if(numero < 0){continue;}
        soma += numero;
        printf("soma dos números digitados: %d\n", soma);
    }

    return 0;
}