#include <stdio.h>
#include <windows.h>

int main (){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int menu;

    printf("Insira o número referente ao Perfil para acesso:\n");
    printf("1 - Administrador\n");
    printf("2 - Professor\n");
    printf("3 - Aluno\n");
    printf("4 - Visitante\n");
    scanf("%d", &menu);
    switch(menu){
        case 1:
            printf("Você acessou com o Perfil de Administrador");
            break;
        case 2:
            printf("Você acessou com o Perfil de Professor");
            break;
        case 3:
            printf("Você acessou com o Perfil de Aluno");
            break;
        case 4:
            printf("Você acessou com o Perfil de Visitante");
            break;
        default:
            printf("Perfil Inválida");
            break;




    }
    return 0;
}