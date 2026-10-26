#include <stdio.h>
#include <windows.h>

int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int notas[5];
    int media,acimedia,abamedia, notatotal;
    notatotal = 0;
    acimedia = 0;
    abamedia = 0;

    for(int i = 0; i < 5; i ++){
        printf("\nDigite o valor da %d° Nota: ", i + 1);
        scanf("%d", &notas[i]);

        notatotal += notas[i];
    }
    media = notatotal / 5;

    for(int i = 0; i < 5; i ++){
        if(notas[i] > media){acimedia ++;}
    else if(notas[i] < media){abamedia++;}
}

    printf("Média da turma: %d\n", media);
    printf("Notas acima da média: %d\n", acimedia);
    printf("Notas abaixo da média: %d", abamedia);



    return 0;
}