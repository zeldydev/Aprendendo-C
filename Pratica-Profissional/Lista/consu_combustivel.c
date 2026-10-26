#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main (){
    system ("chcp 65001 > nul");
    setlocale(LC_ALL, "Portuguese");
    float consumo, distancia, litros;
    printf("Qual a distancia percorrida em KM? \n");
    scanf("%f", &distancia);
    printf("\nQual a quantidade de litros de combustivel consumido ? \n");
    scanf("%f", &litros);
    consumo = distancia / litros;

    if(consumo < 8){
        printf("Consumo Alto\n");
        printf("O Consumo foi de %2.f Km/L\n", consumo);
    }
    else if (consumo >= 8 && 12 >= consumo){
        printf("Consumo Médio\n");
        printf("O Consumo foi de %2.f Km/L\n", consumo);

    }
    else if (consumo > 12){
        printf("Consumo Economico\n");
        printf("O Consumo foi de %2.f Km/L\n", consumo);
    }
    






    return 0;
}