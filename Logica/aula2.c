#include <stdio.h>

int main(){
    char nome [50];
    int idade = 18;
    float altura = 1.78f;
    char inicial = 'G';
    int copiaidade = idade;
    printf("\nSua inicial e: %c", inicial);
    printf("\nVoce tem %2.f de altura", altura);
    printf("\nVoce tem %d anos", idade);

    printf("\n%d", copiaidade);

    return 0;
}


// Regras para nomear variáveis
/*
* letras 
* números: num1, idade 2
*_(underscore)
*/
// camelCase
/*
* nomeAluno
* altura
* idadeAluno
*/

// snake_case
/*
* idade_aluno
* altura_aluno
* nome_aluno
*/

