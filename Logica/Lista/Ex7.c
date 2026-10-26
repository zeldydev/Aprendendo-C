#include <stdio.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int nota1, nota2, nota3;
    float media;
    nota1 = 8;
    nota2 = 7;
    nota3 = 9;
    media = (nota1 + nota2 + nota3) / 3;
    printf("A Médias das notas é igual a %.2f", media);





    return 0;
}