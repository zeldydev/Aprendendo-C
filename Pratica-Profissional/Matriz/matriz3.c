#include <stdio.h>

int main(){

    int numeros [2][2];

    int linha, coluna;
    //prencher a matriz

    for(linha = 0; linha < 2; linha++){
        for(coluna = 0; coluna <2; coluna++){
            printf("Digite o valor de [%d][%d]: ", linha,coluna);
            scanf("%d", &numeros[linha][coluna]);
        }
    }

    for(linha = 0; linha < 2; linha++){
        for(coluna = 0; coluna <2; coluna++){
            printf("%4d", numeros[linha][coluna]);
        }
        printf("\n");
    }


    return 0;
}