#include <stdio.h>
//  int main() {

//     printf("Olá\n");
//     printf("Nome:\tGuilherme\n");
//     printf("Idade:\t18!\n");
//     return 0;
// }



/*
/t - tabulação
/n -nova linha
/v - tabulação vertical
/\" - aspas duplas
/\'- aspas simples
/\\ - barra invertida
*/

/*
%d - inteiro
%f - float
%c - caractere
%s - string

*/

// int main(){

//     printf("%d\n", 25);
//     printf("%f\n", 10.5); // vai acrescentar 6 casas decimais
//     printf("%.2f\n", 10.5);// vai arredondar para 2 casas decimais
//     printf("%c\n", 'A'); // caractere, sempre representado em aspas simples
//     printf("%s\n", "Hello WOrld");// string
//     printf("=================\n");
//     printf("meu nome é %s e tenho %d de idade", "Guilherme", 25);
//     printf("\n");
//     return 0;
// }



// int main () {
//  printf("===================\n");
//  printf("MEU PERFIL \n");
//  printf("===================\n");
//  printf("Nome: %s", "Guilherme\n");
//  printf("Idade: %d", 18);
//  printf("\n");
//  printf("Linguagem: %c", 'C'); 

// return 0;
// }
// gcc main.c -o main
// ./main



int main () {
    int num;
    int num2;

    printf("Digite um número:\n");
    scanf("%d", &num);
    
    printf("Digite outro numero:\n");
    scanf("%d", &num2);


    return 0;
}