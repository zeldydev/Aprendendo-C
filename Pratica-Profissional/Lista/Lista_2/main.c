#include <stdio.h>
#include <windows.h>
#include <stdlib.h>

int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int algarismo, num, resto;

    algarismo = 0;
    
    do{
        printf("Digite um número inteiro: ");
        scanf("%d", &num);
        algarismo++;
        if(num < 0){
            printf("Número Digitado Inválido\n");
            continue;}
            
    }while(num / 10 == 0);

    printf("\nNúmero de entrada: %d", num);
    printf("\nQuantidade de algarismos: %d", algarismo);




    return 0;
}