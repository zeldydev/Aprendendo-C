#include <stdio.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int nota;
    printf("Digite o valor da nota: ");
    scanf("%d", &nota);
    if( nota >= 7){
        printf("Aprovado");
    }
    else{
        printf("Reprovado");
    }



    return 0;
}