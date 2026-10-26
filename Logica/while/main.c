#include <stdio.h>
#include <windows.h>

int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int num;
    
    printf("Digite um número: ");
    scanf("%d", &num);
    
    

    while (num != 0){
        printf("você digitou : %d\n", num);
        printf("Digite um número: ");
        scanf("%d", &num);
        printf("%d\n", num);
    }




    return 0;
}