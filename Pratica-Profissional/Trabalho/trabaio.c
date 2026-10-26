#include <stdio.h>
#include <windows.h>
#include <string.h>
#include <stdlib.h>

int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int quantequipe,jogosdispu, i, n,opcao,vit,emp,der,camp;

    printf("\nNúmero de Equipes entre 3 e 10");
    printf("\nInsira a quantidade de Equipes: ");
    while (scanf("%d", &n) != 1 || n < 3 || n > 10) {
        printf("Entrada invalida! Digite apenas numeros ");
        printf("entre 3 e 10: ");
        while (getchar() != '\n'); 
    }
    printf("\nJogos disputados entre 1 e 10");
    printf("\nInsira a quantidade de jogos disputados por cada equipe: ");
    while (scanf("%d", &jogosdispu) != 1 || jogosdispu < 1 || jogosdispu > 10) {
        printf("\nEntrada invalida! Digite apenas numeros ");
        printf("entre 1 e 10: ");
        while (getchar() != '\n');
    }
    // printf("");
    // scanf("");
    
    while(opcao != 5){
        switch(opcao){
            case 1:
            printf("Você escolheu registrar resultados do campeonato");
                for(i = 1; i <= n; i++){
                    printf("\nInsira as Vitórias da Equipe %d", i);
                    scanf("%d", &vit);
                    printf("\nInsira as Derrotas da Equipe %d", i);
                    scanf("%d", &der);
                    printf("\nInsira os empates da Equipe %d", i);
                    scanf("%d", &emp);
                    camp = (vit*3)+emp+(der*0);

                    if(camp >= 15){printf("Excelente campanha da Equipe %d", i);}
                    else if(camp >= 10 && camp <= 14){printf("Boa campanha da Equipe %d", i);}
                    else if(camp >= 5 && camp <= 9){printf("Campanha regular da Equipe %d", i);}
                    else{printf("Campanha Ruim da Equipe %d", i);}
                }
            case 2:
            printf("Você escolheu Mostrar resumo do campeonato");
            case 3:
            printf("Você escolheu Mostrar Regulamento");
            case 4:
            printf("Você escolheu Simular campanha de uma equipe");
            case 5:
                printf("Você escolheu encerrar o sistema");
        }
    }

    return 0;
}