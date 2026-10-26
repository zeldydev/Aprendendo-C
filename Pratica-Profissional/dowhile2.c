#include<stdio.h>
#include<string.h>
int main (){
    float nota;

do{
printf("Digite uma nota de 0 a 10:\n");
scanf("%d",&nota);
if (nota<0 || nota >10)
{
    printf("Nota invalida!try again\n\n");
}

}while (nota<0 || nota>10);
{
    printf("Nota registrada:%.2f\n",nota);
}

}