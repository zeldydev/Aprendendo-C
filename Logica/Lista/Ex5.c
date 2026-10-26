#include <stdio.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int altura, largura, area;
    largura = 10;
    altura = 5;
    area = largura * altura;

    printf("A Área do Triângulo é igual a: %d", area);









    return 0;
}