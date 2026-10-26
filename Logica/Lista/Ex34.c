#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    float valorCompra;
    int idade;

    printf("Qual a sua idade ? ");
    scanf("%d", &idade);
    printf("Qual o Valor da Compra ?");
    scanf("%f", &valorCompra);

    if(idade >= 60 || valorCompra >= 500){
        printf("Você está apto a receber Desconto");
    }
    else{printf("Você não está apto a receber desconto");}

    return 0;
}