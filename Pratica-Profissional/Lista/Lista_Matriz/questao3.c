#include <stdio.h>

int main(){

    int numeros [2][3];

    int linha, coluna;
    int pares = 0;
    //prencher a matriz

    for(linha = 0; linha < 2; linha++){
        for(coluna = 0; coluna <3; coluna++){
            printf("Digite o valor de [%d][%d]: ", linha,coluna);
            scanf("%d", &numeros[linha][coluna]);

            if(numeros[linha][coluna] % 2 == 0 || numeros[linha][coluna] == 0){pares++;}
        }
    }

    for(linha = 0; linha < 2; linha++){
        for(coluna = 0; coluna <3; coluna++){
            printf("%4d", numeros[linha][coluna]);
        }
        printf("\n");
    }


    return 0;
}