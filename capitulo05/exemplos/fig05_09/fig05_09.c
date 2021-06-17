/* Fig. 5.9: fig05_09.c
   Randomizando o programa de lançamento de dado */
#include <stdio.h>
#include <stdlib.h>

/* função main inicia a execução do programa */
int main( void ){

	int i; /* contador */
	unsigned seed; /* número usado para criar semente do gerador de numero aleatorio */
	
	printf( "Digite a semente: " );
	scanf( "%u", &seed );

	srand( seed ); /* inicia gerador de números aleatórios */

	/* loop 10 vezes */
	for( i = 1; i <= 10; i++ ){

		/* escolhe número aleatório de 1 a 6 e o imprime */
		printf( "%10d", 1 + (rand() % 6) );

		/* se o contador é divisivel por 5, inicia nova linha de impressão */
		if ( i % 5 ==0 ) {
			printf( "\n" );
		} /* fim do if */
	} /* fim do for */

	return 0; /* indica conclusão bem-sucedida */
} /* fim do main */
