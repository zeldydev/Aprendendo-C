#include <stdio.h>
#include <windows.h>

int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int idades[5];
    int i;
    int maioresDeIdade = 0;

    for(i = 0; i < 5; i++){
        printf("Digite a idade da pessoa %d: ", i + 1);
        scanf("%d", &idades[i]);

        if(idades[i] >= 18){
            maioresDeIdade ++;
        }
    }
    printf("\nQuantidade de pessoas maiores de idade: %d\n", maioresDeIdade);

    return 0;
}