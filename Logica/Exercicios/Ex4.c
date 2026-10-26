#include <stdio.h>
#include <windows.h>

int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int numero;

    while(1){

        printf("Digite um número: ");
        scanf("%d", &numero);

        if(numero == 0){break;}

        printf("Número digitado: %d", numero);
    }


    return 0;
}