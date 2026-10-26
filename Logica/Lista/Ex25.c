#include <stdio.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    float celsius, fahreinheit;
    printf("Digite o Valor da temperatura em Celsius: \n");
    scanf("%f", &celsius);
    fahreinheit = celsius * 9 /5 +32;
    printf("\nA Temperatura convertida para Fahreinheit é igual a: %f°", fahreinheit);






    return 0;
}