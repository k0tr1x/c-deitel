/* Fig. 04.06: fig04_06.c
   Calculando juros compostos */

#include <stdio.h>
#include <math.h>

/* Função main inicia a execução do programa */
int main ( void ){
	double valor; /* Valor em depósito */
	double principal = 1000.0; /* taxa anual de juros */
	double taxa = .05; /* taxa anula de juros*/
	int ano; /* contador do ano */

	/* cabeçalho de coluna da tabela de resultados */
	printf("%4s%21s\n", "Ano", "Valor na Conta");

	/* calcula valor em depósito para cada um dos dez anos */
	for( ano = 1; ano <= 10; ano++ ){

		/* Calcula novo valor para o ano especificado */
		valor = principal * pow(1.0 + taxa, ano);

		/* exibe uma linha da tabela */
		printf("%4d%21.2f\n", ano, valor);
	} /*fim do for */

	return 0; /* indica que o programa foi concluido com sucesso */
} /* fim da função main */
