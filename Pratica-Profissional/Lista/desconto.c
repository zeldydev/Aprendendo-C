#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){
    system("chcp 65001 > nul");
    setlocale(LC_ALL, "Portuguese");
    
    float desconto, valor,valor_final;
    printf("Digite o valor do Produto: \n");
    scanf("%f", &valor);
    if(valor <= 99.99){ 
        valor_final = valor - desconto;
        printf("Valor Original: %f \n", valor);
        printf("Desconto: %f\n", desconto);
        printf("Valor Apos o desconto:%f \n", valor_final);
        
    }
    else if (valor >= 100.00 && valor <= 199.99){
        desconto = valor * 0.05;
        valor_final = valor - desconto;
        printf("Valor Original: %f\n", valor);
        printf("Desconto: %f\n", desconto);
        printf("Valor Apos o desconto:%f \n", valor_final);
    }
    else if (valor >= 200.00 && valor <= 499.99){
        desconto = valor * 0.1;
        valor_final = valor - desconto;
        printf("Valor Original: %f\n", valor);
        printf("Desconto: %f\n", desconto);
        printf("Valor Apos o desconto:%f \n", valor_final);
        
    }
    else if (valor >= 500.00){
        desconto = valor * 0.15;
        valor_final = valor - desconto;
        printf("Valor Original: %f\n", valor);
        printf("Desconto: %f\n", desconto);
        printf("Valor Apos o desconto:%f \n", valor_final);

}




    return 0;
}