/* Fig. 08.10: fig08_10.c
 * Usando strtol */
#include <stdio.h>
#include <stdlib.h>

int main( void ){
	
	const char *string = "-1234567abc"; /* inicializa ponteiro de string*/

	char *remainderPtr; /* cria ponteiro de char */
	long x; /* variável para manter sequência convertida */

	x = strtol( string, &remainderPtr, 0 );

	printf( "%s\"%s\"\n%s%ld\n%s\"%s\"\n%s%ld\n",
	     "A string original é ", string,
	     "O valor convertido é ", x,
	     "O resto da string original é ",
	     remainderPtr,
	     "O valor convertido mais 567 é ", x + 567 );
	return 0; /* indica conclusão bem-sucedida */
}/* fim da função main */
