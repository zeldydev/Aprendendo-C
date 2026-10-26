#include <stdio.h>
#include <windows.h>

int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int numeros[6];
    int i,valorProc;
    int encontrados = 0;

    for(i = 0; i <6; i++){
        printf("Digite o %d° :", i + 1);
        scanf("%d", &numeros[i]);
    }

    printf("\nDigite número que você deseja encontrar: ");
    scanf("%d", &valorProc);

    for(i = 0; i < 6; i++){
        if(valorProc == numeros[i]){
            printf("Número encontrado na posição %d. \n", i);
            encontrados++;
        }
    }

    if(encontrados == 0){
        printf("Número não encontrado no vetor.\n");
    }else{
        printf("O número apareceu %d vezes.\n", encontrados);
    }





    return 0;
}