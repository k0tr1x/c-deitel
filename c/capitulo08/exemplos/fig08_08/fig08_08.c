/* Fig. 08.08: fig08_08.c
   Usando atol */
#include <stdio.h>
#include <stdlib.h>

int main( void ){

	long l; /* variavelo para manter a string convertida */

	l = atol( "1000000" );

	printf( "%s%ld\n%s%ld\n",
	     "A string \"1000000\" convertida em long int é ", l,
	     "O valor convertido dividio por 2 é ", l / 2 );
	return 0; /* indica conclusão bem-sucedida */
} /* fim do main */
