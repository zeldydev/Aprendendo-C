/*Receber o valor de um produto, digitar o percentual de desconto, mostrar
o valor de desconto e o preco final do produto.*/
#include <stdio.h>
int main(){
    float produto, desconto , pfinal, fdesconto;
    printf("Qual o valor do produto ? \n");
    scanf("%f", &produto);

    printf("Qual o percentual de desconto ?\n ");
    scanf(" %f", &desconto);

    fdesconto = produto * (desconto / 100.0);
    pfinal = produto - fdesconto;
    

    printf("O preco final do produto e: %.2f\n", pfinal);
    printf("O desconto foi de: %.2f", fdesconto);



    return 0;
}