#include <stdio.h>

int main(){

    int votos[2][5];
    int votosP,votosM;

    votosP = 0;
    votosM = 0;

    for(int i = 0; i < 2; i ++){
        for(int j = 0; j < 5; j++){
            printf("\nTurma %d, Aluno %d\n", i+1, j+1);
            printf("Digite 1 para votar no Pedro\n");
            printf("Digite 2 para votar no Mariana\n");
            printf("Digite seu voto: ");
            scanf("%d", &votos[i][j]);
        }
    }

    for(int i = 0; i < 2; i ++){
        for( int j = 0; j < 5; j++){
            if(votos[i][j] == 1){
                votosP++;
            }else if(votos[i][j] == 2){
                votosM++;}
        }
    }

    printf("Votos para Pedro: %d\n", votosP);
    printf("Votos para Mariana: %d\n", votosM);
    printf("Porcentagem de votos para Pedro: %d%%\n", votosP*10);
    printf("Porcentagem de votos para Mariana: %d%%\n",votosM*10);
    if(votosP > votosM){printf("A diferenca de votos e igual a %d%%\n", (votosP - votosM)*10);}
    else if(votosM > votosP){printf("A diferenca de votos e igual a %d%%\n",(votosM - votosP)*10);}
    else{printf("Empate");}




    return 0;
}