#include <stdio.h>
#include <windows.h>

int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int numeros [3][3];
    int soma = 0;

    int linha, coluna;
    //prencher a matriz

    for(linha = 0; linha < 3; linha++){
        for(coluna = 0; coluna <3; coluna++){
            printf("Digite o valor de [%d][%d]: ", linha,coluna);
            scanf("%d", &numeros[linha][coluna]);
            soma+= numeros[linha][coluna];
        }
    }

    for(linha = 0; linha < 3; linha++){
        for(coluna = 0; coluna <3; coluna++){
            printf("%4d", numeros[linha][coluna]);
        }
        printf("\n");
    }


    printf("O resultado da soma é: %d\n", soma);

    return 0;
}