#include <stdio.h>

int main(){
    int num1, num2, soma, mult, div, sub;

    printf("Qual o primeiro numero ?\n"); 
    scanf("%d",&num1); // Entrada do Primeiro Número
    printf("Qual o segundo numero ?\n");
    scanf("%d",&num2); // Entrada do Segundo Número

    soma = num1 + num2; // operação de soma 
    sub = num1 - num2; // operação de subtração
    mult = num1 * num2; // operação de multiplicação
    div = num1 / num2; // operação de divisão

    // if(div <= 0){

    // }

    printf("A soma dos dois numeros e: %d\n", soma);
    printf("A subtracao dos dois numeros e: %d\n", sub);
    printf("A multiplicacao dos dois numeros e: %d\n", mult);
    printf("A divisao dos dois numeros e: %d\n", div);



    return 0;
}