#include <stdio.h>
#include <windows.h>

int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int menu;

    printf("===== BIBLIOTECA =====\n");
    printf("1 - Cadastrar livro\n");
    printf("2 - Consultar livro\n");
    printf("3 - Emprestar livro\n");
    printf("4 - Devolver livro\n");
    printf("5 - Sair.\n");
    scanf("%d", &menu);

    switch(menu){
        case 1:
            printf("Você selecionou Cadastrar um Livro....");
            break;
        case 2:
            printf("Você selecionou Consultar um Livro....");
            break;
        case 3:
            printf("Você selecionou Emprestar um Livro....");
            break;
        case 4:
            printf("Você selecionou Devolver um Livro....");
            break;
        case 5:
            printf("Você selecionou Sair....");
            break;
        default:
            printf("Opção Inválida");
            break;
    }

    
    return 0;
}

