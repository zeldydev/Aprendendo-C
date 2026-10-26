#include <stdio.h>
#include <windows.h>

int main() {

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int i, num;

    i = 0;
    printf("O contador deve contar até que número ?\n");
    printf("Digite o número:  ");
    scanf("%d", &num);
    while(i <= num){
        printf("%d\n", i);
        i++;
    }
    return 0;
}