#include <stdio.h>
#include <windows.h>

int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int nota;

    printf("Use uma nota entre 1 a 5 para avaliar:\n");
    scanf("%d", &nota);
    
    switch(nota){
        
        case 1:
        printf("Muito Ruim\n");
        break;
        case 2:
        printf("Ruim\n");
        break;
        case 3:
        printf("Regular\n");
        break;
        case 4:
        printf("Bom\n");
        break;
        case 5:
        printf("Excelente\n");
        break;
        default:
        printf("Nota Inválida");
        break;
    }

    return 0;
}