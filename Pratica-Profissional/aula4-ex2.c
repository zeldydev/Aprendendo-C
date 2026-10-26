#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
int main() {
    system("chpc 65001 > nul");
    setlocale(LC_ALL, "Portuguese");
char nome [100];
int opcao ;
float valorCompra;

printf("=== sistema de pagamento===");
printf("\n Digite o nome comleto do cliente:\n");
fgets(nome,sizeof(nome),stdin);
nome[strcspn (nome, "\n")] = '\0';

printf("Digite o valor da compra");
scanf("%f", &valorCompra);

printf("\n ====Payment Method====\n");
printf("1 - PIX: 10%% de desconto\n");
printf("2 - Dinheiro: 5%% de desconto\n");
printf("3 - cartao de debito: preço normal\n");
printf("4 - Cartao de credito: 10%% de acréscimo\n");

}