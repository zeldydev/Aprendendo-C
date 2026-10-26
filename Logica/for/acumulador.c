#include <stdio.h>
#include <windows.h>

int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int num;
    num = 0;
    for(int i = 0; i <5; i++){
        num += i;
    }
    printf("a soma dos números entre 1 a 5 é igual a %d", num);

    return 0;
}