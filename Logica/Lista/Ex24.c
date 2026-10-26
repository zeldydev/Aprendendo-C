#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_NUMERIC, "Portuguese");
    float num1, num2, num3, media;
    printf("Insira o valor para o Primeiro Numero: \n");
    scanf("%f", &num1);
    printf("Insira o valor para o Segundo Numero: \n");
    scanf("%f", &num2);
    printf("Insira o valor para o Terceiro Numero: \n");
    scanf("%f", &num3);
    media = (num1 + num2 + num3) / 3;

    printf("A média dos três números digitados é: %.2f", media);




    return 0;
}