#include <stdio.h>
#include <windows.h>

int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int num;
    
    printf("Insira um Número: ");
    scanf("%d", &num);

    if(num < 0 || num > 100){printf("O número atende aos requisitos");}
    else{printf("O número não atende aos requisitos");}

    return 0;
}