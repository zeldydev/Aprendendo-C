#include <stdio.h>
#include <windows.h>

int main (){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int num1,num2,soma,sub,multi, menu,divisao;
    
    
    printf("Digite um valor para o Primeiro Número\n");
    scanf("%d", &num1);
    printf("Digite um Valor para o Segundo número\n");
    scanf("%d", &num2);
    
    soma = num1 + num2;
    sub = num1 - num2;
    multi = num1 * num2;

    printf("Escolha a operação a ser executada:\n");
    printf("1 - Somar\n");
    printf("2 - Subtrair\n");
    printf("3 - Multiplicar\n");
    printf("4 - Dividir\n");
    scanf("%d", &menu);
    switch(menu){
        case 1:
        printf("Operação Selecionada: Soma\n");
        printf("Valor da Soma entre os dois números: %d", soma);
        break;
        case 2:
        printf("Operação Selecionada: Subtração\n");
        printf("Valor da Subtração entre os dois números: %d", sub);
        break;
        case 3:
        printf("Operação Selecionada: Multiplicação\n");
        printf("Valor da Multiplicação entre os dois números: %d", multi);
        break;
        case 4:
        printf("Operação Selecionada: Divisão\n");
        if(num2 != 0){divisao = num1 / num2;
        printf("Valor da Divisão entre os dois números: %d", divisao);}
        else{printf("Não é possível dividir um Número por 0");}
        break;
        default:
        printf("Opção Inválida\n");
        break;
    }







    return 0;
}