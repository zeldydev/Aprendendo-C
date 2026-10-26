#include <stdio.h>
#include <windows.h>
#include <string.h>
int main (){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    char piloto1[50];
    char piloto2[50];
    int tempo1, tempo2, penalidade1, penalidade2, quantidadep1,quantidadep2, tempofinal1,tempofinal2;


    printf("Qual o nome do Primeiro Piloto ?\n");
    fgets(piloto1,sizeof(piloto1),stdin);
    printf("Qual o nome do Segundo Piloto ?\n");
    fgets(piloto2,sizeof(piloto2),stdin);
    printf("insira a quantidade de penalidades que o Primeiro Piloto Recebeu: \n");
    scanf("%d", &penalidade1);
    printf("insira a quantidade de penalidades que o Segundo Piloto Recebeu: \n");
    scanf("%d", &penalidade2);
    printf("Qual a quantidade de tempo que levou para o Primeiro Piloto terminar o percurso ? \n");
    scanf("%d", &tempo1);
    printf("Qual a quantidade de tempo que levou para o Segundo Piloto terminar o percurso ? \n");
    scanf("%d", &tempo2);
    tempofinal1 = tempo1 + (penalidade1 * 5);
    tempofinal2 = tempo2 + (penalidade2 * 5);
    if(tempofinal1 < tempofinal2){
        printf("\nPiloto 1: %s", piloto1);
        printf("Tempo Original:%d\n", tempo1);
        printf("Penalidades:%d\n", penalidade1);
        printf("Tempo final:%d\n", tempofinal1);

        printf("Piloto 2: %s", piloto2);
        printf("Tempo Original:%d\n", tempo2);
        printf("Penalidades:%d\n", penalidade2);
        printf("Tempo final:%d\n", tempofinal2);

        printf("Vencedor:%s\n", piloto1);
        if(tempofinal2 - tempofinal1 == 3)
        {printf("Vitória por pouco");}
        else if(tempofinal2 - tempofinal1 >= 4 && tempofinal2 - tempofinal1 <= 10)
        {printf("Vitória tranquila");}
        else if(tempofinal2 - tempofinal1 > 10)
        {printf("Vitória com grande vantagem");}

    }
    else if(tempofinal2 < tempofinal1){
        printf("\nPiloto 1: %s", piloto1);
        printf("Tempo Original:%d\n", tempo1);
        printf("Penalidades:%d\n", penalidade1);
        printf("Tempo final:%d\n", tempofinal2);

        printf("Piloto 2: %s", piloto2);
        printf("Tempo Original:%d\n", tempo2);
        printf("Penalidades:%d\n", penalidade2);
        printf("Tempo final:%d\n", tempofinal2);

        printf("Vencedor:%s", piloto2);
        if(tempofinal1 - tempofinal2 == 3)
        {printf("Vitória por pouco");}
        else if(tempofinal1 - tempofinal2 >= 4 && tempofinal1 - tempofinal2 <= 10)
        {printf("Vitória tranquila");}
        else if(tempofinal1 - tempofinal2 > 10)
        {printf("Vitória com grande vantagem");}

        
    }
    else if (tempofinal1 == tempofinal2){

        printf("EMPATE!!");
    }
    
    
    printf("");








    return 0; 
}