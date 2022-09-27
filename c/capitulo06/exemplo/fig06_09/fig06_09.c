/* Figura 06_09: fig06_09.c
   Lança um dado de 6 lados 6000 vezes */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAMANHO 7

/* função main inicia a execução do programa */
int main( void ){

	int dado; /* valor aleatório de 1 - 6 do dado */
	int lancamento; /* contador de lançamentos de 1-6000 */
	int frequencia[ TAMANHO ] = { 0 }; /* limpa contadores */

	srand( time( NULL ) ); /* semente do gerador de números aleatorios */

	/* rola o dado 6000 vezes */
	for ( lancamento = 1; lancamento <= 6000; lancamento ++ ){
		dado = 1 + rand() %6;
		++frequencia[ dado ]; /* substitui switch de 26 linhas da fig 5.8*/
	} /* fim do for */

	printf( "%s%17s\n", "Face", "Frequencia" );

	/* mostra elementos de frequencia 1-6 em formato tabular */
	for( dado = 1; dado < TAMANHO; dado++ ){
		printf( "%4d%17d\n", dado, frequencia[dado] );
	} /* fim do for */

	return 0; /* indica conclusão bem-sucedida */
} /* fim do main */
