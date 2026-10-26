#include <stdio.h>
#include <windows.h>

int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int num, limite;
    num = 0;
    printf("Digite o limite: ");
    scanf("%d", &limite);
    while(num <= limite){
        if(num % 2 == 0){
            printf("%d ", num);
        }
        num++;

    }
    return 0;
}