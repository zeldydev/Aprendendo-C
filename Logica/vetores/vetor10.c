#include <stdio.h>
#include <windows.h>

int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int numeros[5] = (1,2,3,4,5);
    int posicao = 0;
    int procurado = 3;

    for(int i = 0; i < 5; i++){
        if(numeros[i] == procurado){
            posicao = i;
            break;
        }
    }


    

    return 0;
}