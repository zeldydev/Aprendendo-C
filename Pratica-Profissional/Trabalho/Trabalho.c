#include <stdio.h>
#include <windows.h>

/*
Integrantes:
- Henrique Montalvao de Oliveira
- Guilherme Ribeiro Machado
*/

int main(void) {

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int quantidadeEquipes, jogosPorEquipe;
    int opcao = 0;
    int i;

    int vitorias, empates, derrotas, pontos;
    int situacao;

    int registroCompleto = 0;
    int totalVitorias = 0, totalEmpates = 0, totalDerrotas = 0;
    int somaPontos = 0;
    int excelentes = 0, boas = 0, regulares = 0, ruins = 0;
    int maiorPontuacao = 0, menorPontuacao = 0;
    int equipeMaior = 0, equipeMenor = 0;
    int empatadasMaior = 0, empatadasMenor = 0;
    

    printf("=== Sistema de Controle de Campeonato ===\n");
    //Quantidade de equipes entre 3 e 10.
    printf("Quantidade de equipes (3 a 10): ");
    while (scanf("%d", &quantidadeEquipes) != 1 ||
           quantidadeEquipes < 3 || quantidadeEquipes > 10) {
        printf("Valor inválido. Digite um número entre 3 e 10: ");
        while (getchar() != '\n') {
        //impede o loop infinito/erro no codigo ao digitar uma letra.          
        }
    }
    //Quantidade de jogos por equipe (entre 1 e 10).
    printf("Quantidade de jogos por equipe (1 a 10): ");
    while (scanf("%d", &jogosPorEquipe) != 1 ||
           jogosPorEquipe < 1 || jogosPorEquipe > 10) {
        printf("Valor inválido. Digite um número entre 1 e 10: ");
        while (getchar() != '\n') {
        //impede o loop infinito/erro no codigo ao digitar uma letra. 
        }
    }
    //Painel de opções do campeonato.
    while (opcao != 5) {
        printf("\n========== MENU PRINCIPAL ==========\n");
        printf("1 - Registrar resultados do campeonato\n");
        printf("2 - Mostrar resumo do campeonato\n");
        printf("3 - Mostrar regulamento\n");
        printf("4 - Simular campanha de uma equipe\n");
        printf("5 - Encerrar sistema\n");
        printf("Escolha uma opção: ");
        //Para barrar entradas diferentes de 1 a 5.
        if (scanf("%d", &opcao) != 1) {
            printf("Entrada inválida. Digite um número de 1 a 5.\n");
            while (getchar() != '\n') {
            //impede o loop infinito/erro no codigo ao digitar uma letra. 
            }
            opcao = 0;
            continue;
        }
        //Opçao 1, para registrar resultados
        switch (opcao) {
            case 1: {
                // Acumuladores locais:so substituem o resumo ao terminar o registro de todas as equipes. 
                int novoTotalVitorias = 0, novoTotalEmpates = 0;
                int novoTotalDerrotas = 0, novaSomaPontos = 0;
                int novasExcelentes = 0, novasBoas = 0;
                int novasRegulares = 0, novasRuins = 0;
                int novaMaiorPontuacao = 0, novaMenorPontuacao = 0;
                int novaEquipeMaior = 0, novaEquipeMenor = 0;
                int novasEmpatadasMaior = 0, novasEmpatadasMenor = 0;

                printf("\n=== Registro dos resultados ===\n");
                //
                for (i = 1; i <= quantidadeEquipes; i++) {
                    while (1) {
                        printf("Equipe %d - vitórias, empates e derrotas: ", i);
                        if (scanf("%d %d %d", &vitorias, &empates, &derrotas) != 3) {
                            printf("Entrada inválida. Digite três números inteiros.\n");
                            while (getchar() != '\n') {
                            //impede o loop infinito/erro no codigo ao digitar uma letra.
                            }
                            continue;
                        }
                        //Impede que entradas negativas sejam salvas, alem de impedir que guarde valores maiores que os jogos por equipe.
                        if (vitorias < 0 || empates < 0 || derrotas < 0) {
                            printf("Erro: nenhum resultado pode ser negativo.\n");
                        } else if (vitorias + empates + derrotas != jogosPorEquipe) {
                            printf("Erro: a soma deve ser igual a %d jogos.\n",
                                   jogosPorEquipe);
                        } else {
                            break;
                        }
                    }
                    //Calcula a pontuaçao da equipe
                    pontos = vitorias * 3 + empates;
                    //Classificaçao da campanha.
                    if (pontos >= 15) {
                        situacao = 1;
                        printf("Situação: Excelente campanha\n");
                        novasExcelentes++;
                    } else if (pontos >= 10) {
                        situacao = 2;
                        printf("Situação: Boa campanha\n");
                        novasBoas++;
                    } else if (pontos >= 5) {
                        situacao = 3;
                        printf("Situação: Campanha regular\n");
                        novasRegulares++;
                    } else {
                        situacao = 4;
                        printf("Situação: Campanha ruim\n");
                        novasRuins++;
                    }
                    (void)situacao;
                    // Pontuaçao da equipe
                    printf("Equipe %d: %d vitórias, %d empates e %d derrotas\n",
                           i, vitorias, empates, derrotas);
                    printf("Pontuação: %d pontos\n", pontos);

                    novoTotalVitorias += vitorias;
                    novoTotalEmpates += empates;
                    novoTotalDerrotas += derrotas;
                    novaSomaPontos += pontos;

                    if (i == 1 || pontos > novaMaiorPontuacao) {
                        novaMaiorPontuacao = pontos;
                        novaEquipeMaior = i;
                        novasEmpatadasMaior = 1;
                    } else if (pontos == novaMaiorPontuacao) {
                        novasEmpatadasMaior++;
                    }

                    if (i == 1 || pontos < novaMenorPontuacao) {
                        novaMenorPontuacao = pontos;
                        novaEquipeMenor = i;
                        novasEmpatadasMenor = 1;
                    } else if (pontos == novaMenorPontuacao) {
                        novasEmpatadasMenor++;
                    }
                }
                //Registro completo: o novo resumo substitui o anterior.
                totalVitorias = novoTotalVitorias;
                totalEmpates = novoTotalEmpates;
                totalDerrotas = novoTotalDerrotas;
                somaPontos = novaSomaPontos;
                excelentes = novasExcelentes;
                boas = novasBoas;
                regulares = novasRegulares;
                ruins = novasRuins;
                maiorPontuacao = novaMaiorPontuacao;
                menorPontuacao = novaMenorPontuacao;
                equipeMaior = novaEquipeMaior;
                equipeMenor = novaEquipeMenor;
                empatadasMaior = novasEmpatadasMaior;
                empatadasMenor = novasEmpatadasMenor;
                registroCompleto = 1;

                printf("\nRegistro do campeonato concluído.\n");
                break;
            }
            //opçao 2, Mostra o resumo do campeonato.
            case 2:
                printf("\n=== Resumo do campeonato ===\n");
                if (!registroCompleto) {
                    //Essa variavel impede o usuario visualizar o resumo antes de realizar o registro.
                    printf("Registre os resultados primeiro.\n");
                } else {
                    //Resumo do campeonato.
                    printf("Quantidade de equipes: %d\n", quantidadeEquipes);
                    printf("Jogos por equipe: %d\n", jogosPorEquipe);
                    printf("Total de vitórias: %d\n", totalVitorias);
                    printf("Total de empates: %d\n", totalEmpates);
                    printf("Total de derrotas: %d\n", totalDerrotas);
                    printf("Soma dos pontos: %d\n", somaPontos);
                    printf("Média de pontos por equipe: %.2f\n",
                           (double)somaPontos / quantidadeEquipes);
                    printf("Excelente campanha: %d equipe(s)\n", excelentes);
                    printf("Boa campanha: %d equipe(s)\n", boas);
                    printf("Campanha regular: %d equipe(s)\n", regulares);
                    printf("Campanha ruim: %d equipe(s)\n", ruins);
                    printf("Maior pontuação: %d pontos (primeira: Equipe %d)\n",
                           maiorPontuacao, equipeMaior);
                    printf("Equipes empatadas na maior pontuação: %d\n",
                           empatadasMaior);
                    printf("Menor pontuação: %d pontos (primeira: Equipe %d)\n",
                           menorPontuacao, equipeMenor);
                    printf("Equipes empatadas na menor pontuação: %d\n",
                           empatadasMenor);
                }
                break;
                //Opçao 3,apresenta o regulamento do campeonato
            case 3:
                printf("\n=== Regulamento ===\n");
                printf("Vitória: 3 pontos\n");
                printf("Empate: 1 ponto\n");
                printf("Derrota: 0 pontos\n");
                printf("\nSituações por pontuação:\n");
                printf("15 ou mais: Excelente campanha\n");
                printf("10 a 14: Boa campanha\n");
                printf("5 a 9: Campanha regular\n");
                printf("Menos de 5: Campanha ruim\n");
                printf("\nConfiguração inicial:\n");
                printf("Equipes: 3 a 10\n");
                printf("Jogos por equipe: 1 a 10\n");
                break;
                //opçao 4,simula a campanha de uma equipe.
            case 4: {
                int quantidadeSimulacoes, simulacao;
                int vitoriasSim, empatesSim, derrotasSim, pontosSim;
                //Verifica se a quantidade e valida.
                printf("\nQuantidade de simulações (1 a 5): ");
                while (scanf("%d", &quantidadeSimulacoes) != 1 ||
                       quantidadeSimulacoes < 1 || quantidadeSimulacoes > 5) {
                    printf("Valor inválido. Digite um número entre 1 e 5: ");
                    while (getchar() != '\n') {
                        
                    }
                }
                //mantem um loop ate que a quantidade permitida de simulaçoes seja atingida
                for (simulacao = 1; simulacao <= quantidadeSimulacoes; simulacao++) {
                    while (1) {
                        printf("Simulação %d - vitórias, empates e derrotas: ",
                               simulacao);
                        if (scanf("%d %d %d", &vitoriasSim, &empatesSim,
                                  &derrotasSim) != 3) {
                            printf("Entrada inválida. Digite três números inteiros.\n");
                            while (getchar() != '\n') {
                                
                            }
                            continue;
                        }
                        //Verifica se a quantidade de vitorias,empates e derrotas coincidem com a quantidade de jogos. 
                        //alem de verificar se nao e negativo.
                        if (vitoriasSim < 0 || empatesSim < 0 || derrotasSim < 0) {
                            printf("Erro: nenhum resultado pode ser negativo.\n");
                        } else if (vitoriasSim + empatesSim + derrotasSim != jogosPorEquipe) {
                            printf("Erro: a soma deve ser igual a %d jogos.\n",
                                   jogosPorEquipe);
                        } else {
                            break;
                        }
                    }
                    //Pontuacao da equipe.
                    pontosSim = vitoriasSim * 3 + empatesSim;
                    printf("Pontuação: %d pontos\n", pontosSim);
                    //Classificaçao da campanha.
                    if (pontosSim >= 15) {
                        printf("Situação: Excelente campanha\n");
                    } else if (pontosSim >= 10) {
                        printf("Situação: Boa campanha\n");
                    } else if (pontosSim >= 5) {
                        printf("Situação: Campanha regular\n");
                    } else {
                        printf("Situação: Campanha ruim\n");
                    }
                }
                
                break;
            }
            //Opçao 5, encerra o sistema.
            case 5:
                printf("\nSistema encerrado com sucesso.\n");
                printf("Obrigado por utilizar o sistema.\n");
                break;

            default:
                printf("Opção inexistente. Escolha uma opção de 1 a 5.\n");
                break;
        }
    }

    return 0;
}
