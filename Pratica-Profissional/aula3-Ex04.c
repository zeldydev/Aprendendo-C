#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

int main(){
system("chcp 65001 > nul");
setlocale(LC_ALL, "Portuguese");
 int idade;
 
 printf("Digite sua idade: ");
 scanf("%d", &idade);

 if(idade < 12 || idade > 59){
    printf("Entrada gratuita");
}else{
    printf("Entrada Paga");
    
    
 }

    return 0;
}