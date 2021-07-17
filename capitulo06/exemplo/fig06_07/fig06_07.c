/* Figura 06.07: fig 06_07.c 
   Programa de pesquisa com estudantes */
#include <stdio.h>
#define TAMANHO_DA_RESPOSTA 40 /* define tamanos do array */
#define TAMANHO_DA_FREQUENCIA 11

/* função main inicia a execução do programa */
int main( void ){

	int respostas;  /* contador para percorrer 40 respostas */
	int avaliacao; /* contador para percorrer frequencias 1-10 */

	/* inicializa contadores de frequencia em 0 */
	int frequencia[ TAMANHO_DA_FREQUENCIA ] = { 0 };

	/* coloca as respostas da pesquisa no array responses */
	int questionario[TAMANHO_DA_RESPOSTA] = {1, 2, 6, 4, 8, 5, 9, 7, 8, 10,
	       	1, 6, 3, 8, 6, 10, 3, 8, 2, 7, 6, 5, 7, 6, 8, 6, 7, 5, 6, 6,
		5, 6, 7, 5, 6, 4, 8, 6, 8, 10 };

	/* para cada resposta, seleciona valor de um elemento do array questionario 
	   e usa esse valor como subscrito na frequencia do array 
	   para determinar elemento a ser incrementado */
	for( respostas = 0; respostas < TAMANHO_DA_RESPOSTA; respostas++ ){
	 ++frequencia[ questionario[ respostas ] ];
	} /* fim do for */

	/* mostr'a resultados */
	printf( " %s%17s\n", "Avaliação", "Frequencia" );

	/* listas de impressão das frequencias em um formato tabular */
	for( avaliacao = 1; avaliacao < TAMANHO_DA_FREQUENCIA; avaliacao++ ){
		printf( "%6d%17d\n", avaliacao, frequencia[avaliacao] );
	} /* fim do for */

	return 0; /* indica conclusão bem-sucedida */
} /* fim do main*/
