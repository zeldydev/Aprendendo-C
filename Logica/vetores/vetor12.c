#include <stdio.h>
#include <windows.h>

int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int numeros[5];
    int posicao = 0;
    int procurado = 0;

    for(int i = 0; i < 5; i++){
        printf("Digite o valor para o %d° Número: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    printf("Digite o valor do número que será procurado: ");
    scanf("%d", &procurado);

    for(int i = 0; i < 5; i++){
        
        if(numeros[i] == procurado){
            posicao++;
        }
    }

    printf("O número foi digitado %d vezes", posicao);

    

    return 0;
}