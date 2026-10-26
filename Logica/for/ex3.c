#include <stdio.h>
#include <windows.h>

int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    for(int numero = 1; numero <= 10; numero ++){
        for(int multiplicador = 1; multiplicador <= 10; multiplicador++){
            printf("%d x %d = %d\n", numero, multiplicador, numero * multiplicador);
        }
    }




    return 0;
}