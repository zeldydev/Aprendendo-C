#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <stdbool.h>
#include <windows.h>

int main (){

    // Configura o terminal do Windows para UTF-8 de forma limpa e profissional
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8); // Configura também a entrada de texto
char nome [100];
char evento [20];
int idade, ingresso, carteirinha;
float valor, valor_final,desconto;
//Os tipos de ingresso disponíveis são:
// 1 – Cinema: R$ 40,00
// 2 – Teatro: R$ 60,00
// 3 – Show: R$ 120,00
// 4 – Parque: R$ 80,00
printf("Qual o seu nome ? \n");
fgets(nome,sizeof(nome), stdin);
printf("Qual a sua idade ?\n");
scanf("%i", &idade);
printf("Os tipos de ingresso disponveis sao :\n");
printf("1 – Cinema: R$ 40,00\n");
printf("2 – Teatro: R$ 60,00\n");
printf("3 – Show: R$ 120,00\n");
printf("4 – Parque: R$ 80,00\n");
scanf("%i", &ingresso);
printf("Voce possui carteirinha de estudante ?\n");
printf("Use 1-Sim 2-Nao\n");
scanf("%d",&carteirinha);
switch(ingresso){
case 1:
    printf("Voce escolheu o ingresso do cinema por R$40,00");
    valor = 40.00;
    strcpy(evento, "Cinema");
    break;
    
    
case 2:
    printf("Voce escolheu o ingresso do teatro por R$60,00");
    valor = 60.00;
    strcpy(evento, "Teatro");
    break;
case 3:
    printf("Voce escolheu o ingresso do show por R$120,00");
    valor = 120.00;
   strcpy(evento, "Show");
    break;
case 4:
    printf("Voce escolheu o ingresso do parque por R$80,00");
    valor = 80.00;
    strcpy(evento, "Parque");
    break;
default: 
        printf("\n Tipo de ingresso invalido! \n");
        printf("\n Tente novamente! \n");
}
if (idade < 12 || idade >=60)
{
 desconto = valor * 0.5;
}
else if (idade >= 12 && idade <= 59 && carteirinha == 1){
desconto = valor * 0.3;
}
valor_final = valor - desconto;
printf("\n----- RESUMO DA COMPRA -----\n");
    printf("Cliente: %s", nome);
    printf("Evento: %s \n", evento);
    printf("Valor original %f\n", valor);
    printf("Valor final: %f \n", valor_final);
    printf("Desconto: %f\n", desconto);



// Exemplo de saída:

// ----- RESUMO DA COMPRA -----

// Cliente: Carlos
// Evento: Teatro
// Valor original: R$ 60.00
// Desconto: 30%
// Valor final: R$ 42.00


    return 0;
}