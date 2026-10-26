#include <stdio.h>
#include <windows.h>

int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int nota, i, reprovado, recuperacao, aprovado;

    reprovado = 0;
    recuperacao = 0;
    aprovado = 0;


    for(i =1; i <= 10; i++){
        printf("Digite a nota do %do aluno ", i);
        scanf("%d", &nota);

        if(nota >= 7){
            aprovado ++;
        }
        else if(nota < 7 && nota >5){
            recuperacao ++;
        }
        else if(nota <5){
            reprovado ++;
            
        }
    }
    printf("Aprovados:%d\n", aprovado);
    printf("Em Recuperação: %d\n", recuperacao);
    printf("Reprovados: %d\n", reprovado);

    return 0;
}