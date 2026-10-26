#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main () {
system("chcp 65001 > null");
setlocale(LC_ALL, "Portuguese");
int opcao;

printf("====Menu principal====\n");
printf("1 - cadastrar usuarios\n");
printf("2 - listar usuarios \n");
printf("3 - excluir usuario \n");
printf("4- sair \n");

printf("\nescolha uma opcao  ");
scanf("%i",&opcao);
switch (opcao){
    case 1:
        printf("\n voce escolheu cadastrar um usuario.\n");
        break;
    case 2: 
    printf("\n voce escolheu listar usuario.\n");
        break;
    case 3:
    printf("voce escolheu excluir usuario");
    break;
    case 4:
    printf("voce escolheu sair\n");
    break;
    default: 
        printf("\n opcao invalida. \n");
    }
}