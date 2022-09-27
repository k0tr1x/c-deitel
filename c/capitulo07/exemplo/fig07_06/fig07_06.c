/* Fig. 07.06: fig07_06.c
 * Cubo de uma variável usando chamada por valor */
#include <stdio.h>

int cubeByValue( int n );

int main( void ){

	int number = 5; /* inicializa número */

	printf( "O valor original do número é %d", number );

	/* passa número por valor a cubeByValue */
	number = cubeByValue( number );

	printf( "\nO novo valor do número é %d\n", number );
	return 0; /* infica conclusão bem-sucedida */
} /* fim do main */

/* calcula e retorna cubo do argumento inteiro */
int cubeByValue( int n ){

	return n * n * n; /* calcula cubo da variavel local n e retorna resultado */
} /* fim da função cobeByValue*/
