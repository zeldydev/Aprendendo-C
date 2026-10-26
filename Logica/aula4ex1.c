#include <stdio.h>

int main(){

    int operacao;
    float saldo;

    saldo = 7435.89;

    printf("Digite a operacao desejada: 1 - Saque, 2 - Deposito, 3 -Saldo: ");
    scanf("%d", &operacao);

    switch (operacao){

        case 1:
            printf(" Voce selecionou saque\n");
            printf("Digite o valor a ser sacado: \n");
            int valor;
            scanf("%d", &valor);
            if (saldo >= valor)
            {
              printf("Valor sacado: %d\n", valor);
            }
            else
            {
                printf("Saldo insuficiente");
            }
            
            break;
        case 2:
            printf("Deposito");
            break;
        case 3:
            printf("Saldo: %f", saldo);
            break;
        default:
            printf("Operacao invalida");
            break;
    }

    return 0;
}