/* Fig. 08.03: fig08_03.c
 * Usando funções islower, isupper, tolower, toupper */
#include <stdio.h>
#include <ctype.h>

int main( void ){

	printf( "%s\n%s%s\n%s%s\n%s%s\n%s%s\n\n",
	     "De acordo com islower: ",
	     islower( 'p' ) ? "p é uma " : "p não é uma ", "letra minúscula",
	     islower( 'P' ) ? "P é uma " : "P não é uma ", "letra minúscula",
	     islower( '5' ) ? "5 é uma " : "5 não é uma ", "letra minúscula",
	     islower( '!' ) ? "! é uma " : "! não é uma ", "letra minúscula");

	printf( "%s\n%s%s\n%s%s\n%s%s\n%s%s\n\n",
	     "De acordo com isupper: ",
	    isupper( 'D' ) ? "D é uma " : "D não é uma ", "letra maiúscula",
	    isupper( 'd' ) ? "d é uma " : "d não é uma ", "letra maiúscula",
	    isupper( '8' ) ? "8 é uma " : "8 não é uma ", "letra maiúscula",
	    isupper( '$' ) ? "$ é uma " : "$ não é uma ", "letra maiúscula");

	printf( "%s%c\n%s%c\n%s%c\n%s%c\n",
	     "u convertido em maiúscula é ", toupper( 'u' ),
	     "7 convertido em maiúscula é ", toupper( '7' ),
	     "$ convertido em maiúscula é ", toupper( '$' ),
	     "L convertido em maiúscula é ", tolower( 'L' ) );
	return 0; /* indica conclusão bem-sucedida */
} /* fim do main */
