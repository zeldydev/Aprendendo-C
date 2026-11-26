#include <stdio.h>
 /*
 Membros: 
    Guilherme Ribeiro Machado UC26100527
    Henrique Montalvão de Oliveira UC26100058
 */

int assentos[3][5] = {0};
float ingressos[3];
void MostrarAssentos(){
    printf("\n%-12s", "Assento");
    for(int i = 0; i < 5; i ++){
        printf("%6d", i + 1);
    }
    printf("\n------------------------------------------\n");
    

    for(int i = 0; i < 3; i++){
        printf("Sessao %-5d", i + 1);

        for(int j = 0; j < 5; j++){
            printf("%6d", assentos[i][j]);
        }
        printf("\n------------------------------------------\n");
    }

}

void limparlinha(){
    while (getchar() != '\n');
}

int lerInteiro(const char msg[]){
    int valor;
    int resultado;
    do {
        printf("%s", msg);
        resultado = scanf("%d", &valor); // d
        limparlinha();
        if (resultado != 1) {
            printf("Entrada invalida. Digite um numero inteiro.\n");
        }
    } while (resultado != 1);
    return valor;
}

void lerPrecos(){
    for(int i = 0; i < 3; i++){
        float valor;
        int resultado;
        do {
            printf("Digite o preco do ingresso da sessao %d: ", i + 1);
            resultado = scanf("%f", &valor);
            limparlinha();
            if (resultado != 1 || valor <= 0) {
                printf("Preco invalido. Digite um valor maior que zero.\n");
            }
        } while (resultado != 1 || valor <= 0);
        ingressos[i] = valor;
    }
}

void ReservarAssento(){
    int sessao, assento;
    sessao = lerInteiro("Digite o numero da sessao: ");
    sessao--;
    assento = lerInteiro("Digite o Assento Desejado:  ");
    assento--;

    if(sessao > 2 || sessao < 0){
        printf("Sessao invalida\n");
        return;
    }
    if(assento < 0 || assento > 4){
        printf("Assento invalido\n");
        return;
    }
    if(assentos[sessao][assento] == 1){
        printf("Assento escolhido ja esta reservado.\n");
        return;
    }
    assentos[sessao][assento] = 1;
    printf("Sessao e Assento reservados com sucesso.\n");
    printf("Valor do ingresso: R$ %.2f\n", ingressos[sessao]);
}

void CancelarReserva(){
    int sessao, assento;
    sessao = lerInteiro("Digite o numero da sessao que deseja cancelar: ");
    sessao--;
    assento = lerInteiro("Digite o Assento que deseja cancelar:  ");
    assento--;
    if(sessao > 2 || sessao < 0){
        printf("Sessao invalida\n");
        return;
    }
    if(assento < 0 || assento > 4){
        printf("Assento invalido\n");
        return;
    }
    assentos[sessao][assento] = 0;
    printf("Cancelado com sucesso.");
}

void Resumo(){
    int livres[3] = {0,0,0};
    int reservados[3] = {0,0,0};
    float ingressotot = 0; 
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 5; j++){
            if(assentos[i][j] == 1){
                reservados[i]++;
            }else{livres[i]++;}
        }
    }
    printf("\n------------------------------------------\n");
    for(int i = 0; i < 3; i ++){
        printf("Sessao %d :\n", i + 1);
        printf("Livres: %d\n", livres[i]);
        printf("Reservados: %d\n", reservados[i]);
        printf("Valor da sessao: R$ %.2f", reservados[i] * ingressos[i]);
        ingressotot += (reservados[i] * ingressos[i]);
        printf("\n------------------------------------------\n");
    }
    printf("Valor total das sessoes: R$ %.2f\n", ingressotot);


}

void MostrarMenu(){
    printf("============== Sistema de Reserva de Assentos ==============\n");
    printf("1 - Mostrar mapa de Assentos\n");
    printf("2 - Reservar assento\n");
    printf("3- Cancelar reserva\n");
    printf("4- Mostrar resumo das sessoes\n");   
    printf("0 - Encerrar\n");
}




int main(){
    int opcao;
    lerPrecos();
    do
    {   MostrarMenu();
        opcao = lerInteiro("Digite a opcao desejada: ");
        switch (opcao)
        {
        case 1:  MostrarAssentos(); break;
        case 2:  ReservarAssento(); break;
        case 3:  CancelarReserva(); break;
        case 4:  Resumo(); break;
        case 0: printf("Programa encerrado"); break;
        
        default: printf("Digite uma opcao valida\n"); break;
        }
    } while (opcao != 0);
    



    return 0;
}