#include <stdio.h>
#include <windows.h>

int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int contador = 0;

    for (int i = 1; i <=20 ; i++){
        if(i % 2 == 0){
            contador++;
        }
    }
    printf("Há %d números pares entre 1 e 20", contador);

    return 0;
}