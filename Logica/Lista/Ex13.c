#include <stdio.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int quantidade = 4;
    float preco, desconto,total,total_final;
    preco = 25.50;
    total = preco * quantidade;
    desconto = total * 0.1;
    total_final = total - desconto;
    printf("Preço do produto: %f\n", preco);
    printf("Quantidade: %d\n", quantidade);
    printf("Total sem desconto: %f\n", total);
    printf("Valor do Desconto: %f\n", desconto);
    printf("Valor Final: %f\n", total_final);






    return 0;
}