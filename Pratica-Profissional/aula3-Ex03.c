#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

int main(){
    system("chcp 65001 > nul");
    setlocale(LC_ALL, "Portuguese");

    float nota1, nota2, media;

    printf("\nDigite a primeira nota: ");
    scanf("%f", &nota1);

    printf("\nDigite a segunda nota: ");
    scanf("%f", &nota2);

    media = (nota1 + nota2) / 2;

    printf("\nA média do aluno foi %.2f \n", media);


    if(media >= 7){
        printf("\nAprovado\n");
    }else{

        printf("\nReprovado\n");
    }



    return 0;
}