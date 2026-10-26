#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

int main (){
 system("chcp 65001 > nul");
 setlocale(LC_ALL, "Portuguese");
    float largura, comprimento, custo, valorm, area;
    valorm = 18,50;
    printf("Insira o valor da largura em Metros: \n");
    scanf("%f", &largura);
    printf("Insira o valor do Comprimento em Metros: \n" );
    scanf("%f", &comprimento);

    area = largura * comprimento;

    custo = valorm * area;

    printf("Para cobrir todo o terreno de %f M²\n", area);
    printf("O custo sera de: %f", custo);


    return 0;
}