#include <stdio.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int num, resto;
    num = 17;
    resto = num % 5;
    printf("O Resto da divisão 17/5 é igual a: %d ", resto);




    return 0;
}