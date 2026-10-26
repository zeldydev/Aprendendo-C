#include <stdio.h>
#include <windows.h>
#include <string.h>

int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int num, opcao;

    printf("=====MENU=====\n");
    printf("Selecione uma das opções a seguir: \n");
    printf("1 - TABUADA\n");
    printf("2 - PAR OU IMPAR\n");
    scanf("%d", &opcao);

    switch(opcao){
        case 1:
            do{
                printf("Opção escolhida: TABUADA");
            }
            while(num<num*10);
            break;
    

    }







    return 0;
}