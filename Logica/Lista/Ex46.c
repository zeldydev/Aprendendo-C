#include <stdio.h>
#include <windows.h>

int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int menu, idade;

    printf("Insira sua idade: ");
    scanf("%d", &idade);
    printf("\nInsira o número referente ao Perfil para acesso:\n");
    printf("1 - Administrador\n");
    printf("2 - Professor\n");
    printf("3 - Aluno\n");
    printf("4 - Visitante\n");
    scanf("%d", &menu);

    if(idade >=18){
        if(menu == 1){printf("Acessado como Administrador");}
        else if(menu == 2){printf("Acessado como Professor");}
        else if(menu == 3){printf("Acessado como Aluno");}
        else if(menu == 4){printf("Acessado como Aluno");}
    }
    else{printf("Acesso negado");}

    return 0;
}