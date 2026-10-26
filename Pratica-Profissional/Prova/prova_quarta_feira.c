/*
QUESTÃO 1 - CORRIDA DE DRONES - 1,0 ponto

Dois pilotos estão participando de uma corrida de drones.

Crie um programa em C que receba:

- o nome do primeiro piloto;
- o nome do segundo piloto;
- o tempo, em segundos, que o primeiro piloto levou para completar o percurso;
- o tempo, em segundos, que o segundo piloto levou para completar o percurso;
- a quantidade de penalidades cometidas pelo primeiro piloto;
- a quantidade de penalidades cometidas pelo segundo piloto.

Cada penalidade acrescenta 5 segundos ao tempo do piloto.

O programa deverá calcular o tempo final de cada competidor, considerando as penalidades.

REGRAS:

O piloto que terminar com o menor tempo final será o vencedor.

A saída deverá mostrar:

Piloto 1: NOME
Tempo original: XX segundos
Penalidades: X
Tempo final: XX segundos

Piloto 2: NOME
Tempo original: XX segundos
Penalidades: X
Tempo final: XX segundos

Vencedor: NOME DO PILOTO

Depois, classifique a vitória de acordo com a diferença entre os tempos finais:

- diferença de até 3 segundos -> Vitória por pouco;
- diferença de 4 até 10 segundos -> Vitória tranquila;
- diferença maior que 10 segundos -> Vitória com grande vantagem.

Caso os dois pilotos terminem com exatamente o mesmo tempo final, mostre:

Empate!

Exemplo:

Piloto 1: Carlos
Tempo original: 48 segundos
Penalidades: 2
Tempo final: 58 segundos

Piloto 2: Lucas
Tempo original: 55 segundos
Penalidades: 0
Tempo final: 55 segundos

Vencedor: Lucas
Vitória por pouco

Utilize estruturas condicionais e operadores relacionais para resolver o problema.
*/


/*
QUESTÃO 2 - ELEVADOR INTELIGENTE - 0,5 ponto

Um prédio possui os seguintes destinos disponíveis no elevador:

1 - Subsolo
2 - Térreo
3 - 1º andar
4 - 2º andar
5 - 3º andar

Crie um programa em C que receba:

- o andar atual do elevador;
- a opção de destino escolhida pelo usuário.

Utilize switch para identificar o andar de destino.

Depois, utilizando estruturas condicionais, o programa deverá informar o movimento do elevador:

- se o destino estiver acima do andar atual, mostrar "Elevador subindo";
- se o destino estiver abaixo do andar atual, mostrar "Elevador descendo";
- se o usuário escolher o mesmo andar em que o elevador já está, mostrar "Elevador já está neste andar".

Considere os seguintes valores para representar os andares:

Subsolo = -1
Térreo  = 0
1º andar = 1
2º andar = 2
3º andar = 3

Ao final, mostre também:

Andar atual:
Andar de destino:
Movimento:

Caso o usuário escolha uma opção inexistente no menu, mostre:

Destino inválido.
*/


/*
QUESTÃO 3 - VALIDAÇÃO E CLASSIFICAÇÃO DE HORÁRIO - 0,5 ponto

Crie um programa em C que receba:

- uma hora;
- os minutos.

Primeiro, o programa deverá verificar se o horário informado é válido.

Considere válido somente quando:

- a hora estiver entre 0 e 23;
- os minutos estiverem entre 0 e 59.

Caso o horário seja inválido, mostre:

Horário inválido.

Caso o horário seja válido, classifique-o de acordo com o período do dia:

- de 00:00 até 05:59 -> Madrugada;
- de 06:00 até 11:59 -> Manhã;
- de 12:00 até 17:59 -> Tarde;
- de 18:00 até 23:59 -> Noite.

Além disso, verifique se o horário informado corresponde exatamente ao início de uma hora,
ou seja, se os minutos forem iguais a 0.

Nesse caso, mostre também:

Horário cheio.

Exemplo:

Digite a hora: 18
Digite os minutos: 0

Horário válido.
Período: Noite
Horário cheio.

Outro exemplo:

Digite a hora: 25
Digite os minutos: 10

Horário inválido.

Utilize operadores relacionais, operadores lógicos, if, else if e else.
*/
