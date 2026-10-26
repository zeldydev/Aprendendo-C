#include <stdio.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    float celsius, fahreinheit;
    celsius = 30;
    fahreinheit = celsius * 9 /5 +32;
    printf("A Temperatura convertida para Fahreinheit é igual a: %f°", fahreinheit);






    return 0;
}