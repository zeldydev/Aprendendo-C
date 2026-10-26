#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_NUMERIC, "Portuguese");
    float valorCompra, valorPago, troco;
    printf("Insira o valor da compra\n");
    scanf("%f", &valorCompra);
    printf("Insira o Valor Pago:\n");
    scanf("%f", &valorPago);
    troco = valorPago - valorCompra;
    printf("O Valor do troco a ser entregue é: %.2f", troco);





    return 0;
}