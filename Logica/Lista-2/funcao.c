#include <stdio.h>

void mostrarBoasVindas(){
    printf("Bem vindo!");
}

void mostrarLinha(){
    printf("----------");
}

/*Definir a função você declara ela e dita o que ela irá fazer ( O que será executado),
quando você chama a função.*/

int dobro(int x){
    return 2*x;
}

int subtrair(int x,int y){
    return x - y;
}

int quadrado(int x){
    x * x;
}

int maior(int x, int y){
    if(x >= y){
        return x;
    }else{
        return y;
    }
}

float calcularMedia(int x, int y){
    return x + y / 2;
}


int main(){
    float num1,num2;
    num1 = 4.0;
    num2 = 4.5;
    float resultado = calcularMedia(num1,num2);
    printf("%d", resultado);

    return 0;
}