#include <stdio.h>

int main(){

    int idade = 20;

    // operador de incremento 
    // acrescenta o valor da variável em 1
    // ++
    idade ++; 
    idade ++;
    idade ++;

    // operador de decremento
    // decrementa o valor da variável em 1
    // --
    idade --;

    // operadores de atribuição compostos
    // +=, -=, *=, /=, %= 
    idade += 5; // adiciona 5 a idade
    idade -= 3; // subtrai 3 da idade
    idade *= 2; // multiplica a idade por 2
    idade /= 4; // divide a idade por 4
    idade %= 3; // calcule o resto da divisão por 3

    printf("Idade: %d\n", idade);



    return 0;
}