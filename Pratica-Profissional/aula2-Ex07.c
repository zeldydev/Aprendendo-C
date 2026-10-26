/*Crie um programa que leia uma temperatura em Celsius e converta para Fahrenheit*/
#include <stdio.h>
int main(){
    float celsius, fahreinheit;
    printf("Qual a temperatura medida em Celsius ? \n");
    scanf("%f", &celsius);

    fahreinheit = (celsius * 1.8) + 32;


    printf("\nA temperatura convertida para Fahreinheit e: %.1f", fahreinheit);


    return 0;
}