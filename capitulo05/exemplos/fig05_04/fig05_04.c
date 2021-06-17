/* Fig. 5.4: fig05_04.c
   Achando o máximo de três números */
#include <stdio.h>

int maximum( int x, int y, int z ); /* Protótipo da função*/

/* função main inicia a execução do programa */
int main( void ){

	int number1;  /* primeiro inteiro */
	int number2;  /* segundo inteiro */
	int number3;  /* terceiro inteiro */

	printf( "Digite três inteiros: " );
	scanf( "%d%d%d", &number1, &number2, &number3 );

	/* number1, number2, number3 são argumentos
	   da chamada da função maximum */
	printf("Máximo é: %d\n", maximum(number1, number2, number3));
	return 0;
} /* Fim do main*/

/* Definição da função maximum */
/* x, y e z são parametros */
	int maximum(int x, int y, int z){

		int max = x; /* considera que x é o maior*/

		if ( y > max ) { /* se y é maior que max, atribui y a max */
			max = y;
		} /* Fim do if*/

		if ( z > max ) { /* se z é maior que max, atribui z a max*/
			max = z;
		} /* fim do if*/

	return max; /* max é o maior valor */
	} /* fim da função maximum */
