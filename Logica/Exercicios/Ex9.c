#include <stdio.h>
#include <windows.h>

int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int par = 0;
    int impar = 0;
    for(int i = 1; i <= 10; i ++){

        if(i % 2 == 0){par++;}
        else{impar++;}
    }
    printf("Números pares: %d\n", par);
    printf("Números Impares: %d", impar);


    return 0;
}