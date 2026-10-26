/*
LISTA DE EXERCÍCIOS - DO WHILE
Disciplina: Práticas Profissionais II
Professor: Sidney de Castro Lima

ORIENTAÇÕES:
- Desenvolva um programa separado para cada exercício.
- Utilize obrigatoriamente do while em cada solução.
- Você poderá utilizar variáveis simples, if, else if, else e switch.
- Não utilize vetores, matrizes ou funções próprias.
- Considere que o usuário digitará apenas números nos campos numéricos.
- Este arquivo contém apenas os enunciados, sem soluções.
*/

/*
EXERCÍCIO 1 - CONTAGEM DE ALGARISMOS

Crie um programa que receba um número inteiro não negativo e informe
quantos algarismos ele possui.

Se o usuário digitar um número negativo, solicite outro número até receber
um valor válido.

Utilize do while para contar os algarismos, dividindo sucessivamente o
número inteiro por 10 até que o resultado seja zero. Considere que o
número 0 possui um algarismo.

Exemplos:
Entrada: 7     -> Quantidade de algarismos: 1
Entrada: 482   -> Quantidade de algarismos: 3
Entrada: 1500  -> Quantidade de algarismos: 4
Entrada: 0     -> Quantidade de algarismos: 1
*/

/*
EXERCÍCIO 2 - FECHAMENTO DE UMA COMPRA

Crie um programa para registrar os produtos de uma compra. Para cada
produto, solicite o preço unitário e a quantidade comprada.

O preço e a quantidade devem ser maiores que zero. Solicite novamente
qualquer campo que tenha recebido um valor inválido.

Calcule e mostre o subtotal do produto. Depois, pergunte se o usuário
deseja registrar outro produto: 1 para SIM e 0 para NÃO. Se a resposta
for diferente de 0 e 1, solicite novamente.

Utilize do while para permitir o registro de pelo menos um produto.

Ao encerrar, mostre:
- A quantidade de registros de produtos;
- A quantidade total de unidades compradas;
- O valor total da compra antes do desconto;
- O valor do desconto;
- O valor final a pagar.

Se o total antes do desconto for igual ou superior a R$ 200,00, aplique
um desconto de 10%. Caso contrário, o desconto será zero.
Apresente os valores monetários com duas casas decimais.
*/

/*
EXERCÍCIO 3 - ALCANÇANDO UMA META DE ECONOMIA

Crie um programa que solicite uma meta de economia em reais. A meta deve
ser maior que zero; se não for, solicite novamente.

A economia começa em R$ 0,00. O usuário deverá informar, um por vez, os
valores que conseguiu guardar. Cada valor deve ser maior que zero.
Valores inválidos devem ser solicitados novamente e não devem entrar
na soma nem na contagem dos depósitos.

Após cada depósito válido, mostre o total acumulado. Se a meta ainda
não tiver sido alcançada, mostre também quanto falta.

Utilize do while para continuar recebendo depósitos até que a soma
seja igual ou superior à meta.

Ao final, informe:
- A meta definida;
- O total guardado;
- A quantidade de depósitos válidos;
- O valor que ultrapassou a meta, ou zero se ela foi atingida exatamente.

Apresente os valores monetários com duas casas decimais.
*/

/*
EXERCÍCIO 4 - VOTAÇÃO PARA REPRESENTANTE DE TURMA

Crie um programa que apresente repetidamente as opções:

1 - Votar no candidato 1
2 - Votar no candidato 2
3 - Votar no candidato 3
4 - Votar em branco
0 - Encerrar a votação

Utilize do while para manter a votação ativa e switch para registrar
cada escolha.

Cada escolha entre 1 e 4 representa um voto. Uma opção diferente de
0, 1, 2, 3 e 4 deverá gerar a mensagem "Opção inválida" e não deverá
ser contabilizada. A opção 0 encerra e não representa um voto.

Ao encerrar, mostre os votos de cada candidato, os votos em branco
e o total de votos registrados.

Se nenhum candidato tiver recebido votos, informe "Sem vencedor".
Caso contrário, identifique o candidato mais votado. Se houver empate
na maior quantidade de votos entre candidatos, informe "Empate".
Votos em branco entram no total, mas não participam da escolha do vencedor.
*/

/*
EXERCÍCIO 5 - MONITORAMENTO DE TEMPERATURAS

Crie um programa para registrar temperaturas em graus Celsius.
Temperaturas positivas, negativas e iguais a zero são válidas.

Utilize do while para receber pelo menos uma temperatura. Após cada
leitura, pergunte se o usuário deseja registrar outra: 1 para SIM
e 0 para NÃO. Se a resposta for diferente de 0 e 1, solicite novamente.

O programa não deverá armazenar todas as temperaturas. Utilize apenas
variáveis simples para atualizar o resumo a cada leitura.

Ao encerrar, mostre:
- A quantidade de temperaturas registradas;
- A maior temperatura;
- A menor temperatura;
- A média das temperaturas;
- A quantidade de temperaturas abaixo de 0 graus;
- A quantidade de temperaturas acima de 35 graus.

Use a primeira temperatura registrada como valor inicial da maior
e da menor temperatura. Apresente maior, menor e média com uma casa decimal.
*/

