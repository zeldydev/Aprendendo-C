#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

int main (){
    system("chcp 65001 > nul");
    setlocale(LC_ALL, "Portuguese");

    float valor_total, resultado;
    int pessoas, taxa;

    printf("Insira o Valor total: \n");
    scanf("%f", &valor_total);
    printf("\nQual o numero de pessoas a dividir a conta ? \n");
    scanf("%d", &pessoas);
    taxa = valor_total * 0,1;
    resultado = (valor_total + taxa) / pessoas;
    printf("O valor que cada um deve pagar é igual a %f ", resultado);



    return 0;
}