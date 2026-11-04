#include <stdio.h>
#include <windows.h>

int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);


    int nums[5] = {10,20,30,40,50};
    int soma = 0;

    for(int i = 0; i < 5; i++){
        soma += nums[i];

    }

    printf("A soma dos números do vetor é igual a: %d", soma);
    return 0;
}