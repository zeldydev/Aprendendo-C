#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){
    system("chcp 65001 > nul");
    setlocale(LC_ALL, "Portuguese");

    float valor, pagamento, troco;

    printf("Insira o valor a ser pago pelo cliente: \n");
    scanf("%f", &valor);
    printf("Insira o valor que o cliente pagou: \n");
    scanf("%f", &pagamento);

    troco = pagamento - valor;
    
    if (pagamento == valor){
        printf("Pagamento realizado com sucesso\n");
        printf("Não há troco");
    }
    else if ( pagamento > valor){
        printf("Pagamento realizado com sucesso\n");
        printf("Troco no valor de %f", troco);
    }
    else if (pagamento < valor){
        printf("Valor insuficiente");
    }
    



    return 0;
}