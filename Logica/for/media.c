#include <stdio.h>
#include <windows.h>

int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int num, acumulador;
    acumulador = 0;
    for(int i = 0; i <5; i++){
        printf("\nDigite um Número para ser somado: ");
        scanf("%d", &num);
        acumulador += num;
    }
    printf("A média dos números digitados é igual a %d", acumulador/5);


    return 0;
}