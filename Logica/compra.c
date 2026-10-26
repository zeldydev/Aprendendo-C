#include <stdio.h>

int main () {
    float preco, quantidade, total, desconto;
    preco = 25.50;
    quantidade = 4;
    desconto =  quantidade * preco * 0.1;
    total = quantidade * preco - desconto;
    printf("Preco: %f\n", preco);
    printf("Total: %f\n", total);
    printf("Quantidade: %f\n", quantidade);
    printf("Valor do desconto: %f\n", desconto);


    return 0;
}