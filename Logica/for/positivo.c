#include <stdio.h>
#include <windows.h>

int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int i, num;
    int contador = 0;
    for (i = 0; i <5 ; i++){
        printf("\nDigite um número: ");
        scanf("%d", &num);
        if(num>=0){
            contador++;
        }
    }
    printf("foram digitados %d números positivos", contador);

    return 0;
}