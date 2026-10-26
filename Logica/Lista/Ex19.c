#include <stdio.h>
#include <windows.h>
#include <locale.h>


int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_NUMERIC, "Portuguese");
    float altura;
    printf("Digite sua altura: \n");
    scanf("%f", &altura);
    printf("Sua altura é: %.2f", altura);



    return 0;
}