#include <stdio.h>
#include <windows.h>

int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int notas[5] = {8,10,10,4,6};
    int soma,media;
    soma = 0;

    for(int i = 0; i < 5; i++){
        soma += notas[i];
    }

    media = soma / 5;

    printf("A média da turma é igual a: %d", media);

    return 0;
}