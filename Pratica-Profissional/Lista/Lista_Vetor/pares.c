#include <stdio.h>
#include <windows.h>

int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int numeros[8];
    int pares;
    pares = 0;

    for(int i = 0; i < 8; i++){
        
        printf("\nDigite o %d° Número: ", i + 1);
        scanf("%d", &numeros[i]);

        if(numeros[i] % 2 == 0){pares++;}
    }

    printf("Há %d números pares entre os digitados\n", pares);


    return 0;
}