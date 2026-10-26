#include <stdio.h>
#include <windows.h>
#include <string.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    char atual_andar[20];
    int andar_atual,andar,subsolo,terreo,andar1,andar2,andar3,andardestino;
    subsolo = -1;
    terreo = 0;
    andar1 = 1;
    andar2 = 2;
    andar3 = 3;
    printf("Qual o andar atual ?\n");
    scanf("%d", &andar_atual);
    if(andar_atual == -1){strcpy(atual_andar, "Subsolo");}
    else if(andar_atual == 0){strcpy(atual_andar, "Térreo");}
    else if(andar_atual == 1){strcpy(atual_andar, "1º andar");}
    else if(andar_atual == 2){strcpy(atual_andar, "2º andar");}
    else if(andar_atual == 3){strcpy(atual_andar, "3º andar");}
    printf("Para qual andar você deseja ir?\n");
    printf("1 - Subsolo\n");
    printf("2 - Térreo\n");
    printf("3 - 1º andar\n");
    printf("4 - 2º andar\n");
    printf("5 - 3º andar\n");
    scanf("%d", &andar);
    switch(andar){
        case 1:
            printf("Andar Atual:%s\n", atual_andar);
            printf("\nAndar de Destino: Subsolo\n");
            if(andar_atual < andar){printf("Movimento: Elevador Subindo\n");}
            else if(andar_atual > andar){printf("Movimento: Elevador descendo\n");}
            else if(andar_atual == andar){printf("Movimento: Elevador já está neste andar\n");}
            break;
        case 2:
            printf("Andar Atual:%s\n", atual_andar);
            printf("\nAndar de Destino: Térreo\n");
            if(andar_atual < andar){printf("Movimento: Elevador Subindo\n");}
            else if(andar_atual > andar){printf("Movimento: Elevador descendo\n");}
            else if(andar_atual == andar){printf("Movimento: Elevador já está neste andar\n");}
            break;
        case 3:
            printf("Andar Atual:%s", atual_andar);
            printf("\nAndar de Destino: 1º andar\n");
            if(andar_atual < andar){printf("Movimento: Elevador Subindo\n");}
            else if(andar_atual > andar){printf("Movimento: Elevador descendo\n");}
            else if(andar_atual == andar){printf("Movimento: Elevador já está neste andar\n");}
            break;
        case 4:
            printf("Andar Atual:%s\n", atual_andar);
            printf("\nAndar de Destino: 2º andar\n");
            if(andar_atual < andar){printf("Movimento: Elevador Subindo\n");}
            else if(andar_atual > andar){printf("Movimento: Elevador descendo\n");}
            else if(andar_atual == andar){printf("Movimento: Elevador já está neste andar\n");}
            break;
        case 5:
            printf("Andar Atual:%s\n", atual_andar);
            printf("\nAndar de Destino: 3º andar\n");
            if(andar_atual < andar){printf("Movimento: Elevador Subindo\n");}
            else if(andar_atual > andar){printf("Movimento: Elevador descendo\n");}
            else if(andar_atual == andar){printf("Movimento: Elevador já está neste andar\n");}
            break;
        default:
            printf("Destino Inválido");
    }




    return 0;
}