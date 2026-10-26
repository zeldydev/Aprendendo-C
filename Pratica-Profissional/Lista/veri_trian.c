#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

int main (){
    int lado1, lado2, lado3;

    printf("Digite o valor do primeiro lado: \n");
    scanf("%d", &lado1);
    printf("Digite o valor do segundo lado: \n");
    scanf("%d", &lado2);
    printf("Digite o valor do Terceiro lado: \n");
    scanf("%d", &lado3);
    

if(lado1 < lado2 + lado3 && lado2 < lado1 + lado3 && lado3 < lado2 + lado1) {
    printf("Os valores digitados formam um triangulo");
}
else {
    printf("Os valores digitados nao formam um triangulo");
}









    return 0;
}