#include <stdio.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int quantidade;
    float preco, total;
    quantidade = 4;
    preco = 12.50;
    total = quantidade * preco;
    printf("O Total da compra é igual a :%2.f",total);







    return 0;
}