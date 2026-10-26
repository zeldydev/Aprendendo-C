#include <stdio.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int idade;
    printf("Digite sua idade: \n");
    scanf("%d", &idade);
    if( idade >= 18){
        printf("Maior de idade");
    }
    else{
        printf("Menor de idade");

    }






    return 0;
}