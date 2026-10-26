#include <stdio.h>
#include <windows.h>

int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int nota, i, aprovado, reprovado;
    aprovado = 0;
    reprovado = 0;
    for(i = 0; i<10; i++){
        printf("\nDigite uma nota: ");
        scanf("%d", &nota);

        if(nota >=7){
            aprovado ++;
        }
        else{
            reprovado ++;
        }
    }

    printf("Número de Aprovados: %d", aprovado);
    printf("\nNúmero de Reprovados: %d", reprovado);

    return 0;
}