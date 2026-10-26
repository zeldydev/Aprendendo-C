#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_NUMERIC, "Portuguese");
    double preco;
    printf("Digite o preço do produto:");
    scanf("%lf", &preco);
    printf("O Preço do Produto será: %.2lf", preco);



    return 0;
}