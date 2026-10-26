#include <stdio.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int num;
    printf("Digite um número: ");
    scanf("%d", &num);
    if(num < 0){
        printf("O Número digitado é negativo");
    }
else{
    printf("O Número digitado não é negativo");
}



    return 0;
}