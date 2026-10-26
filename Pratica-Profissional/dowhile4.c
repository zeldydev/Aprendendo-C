#include <stdio.h>
#include <windows.h>
#include <string.h>

int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int num, opcao, contador;
do{
    printf("=====MENU=====\n");
    printf("1 - TABUADA\n");
    printf("2 - VERIFICAR PAR OU IMPAR\n");
    printf("0 - SAIR\n");
    printf("Selecione uma opção: ");
    scanf("%d", &opcao);
    switch(opcao){
        case 1:
            printf("\nDigite um número para a tabuada: ");
            scanf("%d", &num);
            for(contador = 1; contador <= 10; contador ++){
            printf("\n%d X %d = %d", num,contador,num*contador);
            }
            break;
        case 2:
            printf("Digite um número inteiro: ");
            scanf("%d", &num);
            if(num % 2 == 0){
                printf("O Número digitado é par");
            }
            else{
                printf("O Número digitado é impar");
            }
            break;
        case 0:
            printf("\n==Programa Encerrado==");
            break;
        default:
            printf("Opção Inválida");
            break;
    }
        
}while(opcao!=0);
    







    return 0;
}