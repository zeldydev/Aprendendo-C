#include <stdio.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int idade;
    printf("Digite sua idade: \n");
    scanf("%d", &idade);
    printf("Idade informada é: %d\n", idade);







    return 0;
}