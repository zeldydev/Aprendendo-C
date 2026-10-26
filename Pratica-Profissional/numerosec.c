#include <stdio.h>
#include <windows.h>

int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int num, numsec, tentativa;

    numsec = 67;
    tentativa = 0; 
    do{
        printf("\n===Número Secreto===");
        printf("\nTente adivinhar o número secreto: ");
        scanf("%d", &num);
        tentativa++;
        if(num < numsec){
            printf("\nO Número Secreto é maior que %d", num);
        }else if(num > numsec){
            printf("\nO Número Secreto é menor que %d", num);
        }

    }while(num!=numsec);

    printf("Parabéns, você acertou o Número Secreto em %d tentativas\n", tentativa);
    printf("Número Secreto: %d", numsec);






    return 0;
}