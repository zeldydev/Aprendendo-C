#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(){

    system("chcp 65001 > nul");
    setlocale(LC_ALL, "Portuguese");
    int num1, num2, num3;

    printf("Insira o valor do primeiro numero: ");
    scanf("%d", &num1);
    printf("Insira o valor do segundo numero: ");
    scanf("%d", &num2);
    printf("Insira o valor do terceiro numero: ");
    scanf("%d", &num3);

if ( num1 > num2 && num1 > num3){
        printf("O primeiro Numero Digitado e o Maior dos Tres");
    }
else if (num2 > num1 && num2 > num3){
    printf("O Segundo Numero digitado e o maior dos Tres");
}
else if (num3 > num1 && num3 > num2){
    printf("O Terceiro numero digitado e o maior dos Tres");
}
else if (num1 == num2 && num1 == num3){printf("Todos os numeros sao iguais");}





    return 0;
}