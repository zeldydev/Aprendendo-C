#include <stdio.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int resultado,resultadodif;
    resultado = (10 + 5) * 2 - 8 / 4;
    resultadodif = 10 + 5 * 2 - 8 / 4;
    printf("Resultado da conta com parênteses: %d\n", resultado);
    printf("Resultado da conta sem parênteses: %d\n", resultadodif);
    






    return 0;
}