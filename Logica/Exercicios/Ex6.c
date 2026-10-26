#include <stdio.h>
#include <windows.h>

int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int numero;

    for(int i = 1; i <= 5; i++){

        printf("Digite um número positivo: ");
        scanf("%d", &numero);

        if(numero < 0){continue;}
        printf("Número digitado: %d", numero);
    }






    return 0;
}