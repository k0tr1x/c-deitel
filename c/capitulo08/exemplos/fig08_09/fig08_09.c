/* Fig 08.09: fig08_09.c
 * Usando strtod */
#include <stdio.h>
#include <stdlib.h>

int main( void ){

	/* inicializa ponteiro de string */
	const char *string = "51.2% são admitidos"; /* inicializa string */

	double d; /* variável para manter sequencia convertida */
	char *stringPtr; /* cria o ponteiro char */

	d = strtod( string, &stringPtr );

	printf( "A string \"%s\" é convertida em\n", string );
	printf( "valor double %.2f e a string \"%s\"\n", d, stringPtr );
	return 0; /* indica conclusão bem-sucedida */
} /* fim do main */
