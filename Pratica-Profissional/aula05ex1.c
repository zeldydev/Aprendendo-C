#include <stdio.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int num, i;

    printf("Digite um Número: ");
    scanf("%d", &num);

    for(i = 1; i <= 10; i++){
        printf("%d vezes, %d = %d\n", num, i, i*num);

    }






    return 0;
}