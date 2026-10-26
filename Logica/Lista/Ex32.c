#include <stdio.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int num1, num2;
    printf("Digite o valor do Primeiro número: ");
    scanf("%d", &num1);
    printf("\nDigite o valor do Segundo número: ");
    scanf("%d", &num2);
    if(num1 > num2){
        printf("O Primeiro Número digitado é o maior");
    }
else if (num2 > num1){
    printf("O Segundo Número digitado é o maior");
}
else if(num1 == num2){
    printf("O Primeiro e o Segundo número digitados são iguais");
}


    return 0;
}