/* Fig. 08.11: fig08_11.c
 * usando strtoul */
#include <stdio.h>
#include <stdlib.h>

int main ( void ){

 	const char *string = "123457abc"; /* inicializa ponteiro de string */
	unsigned long x; /* variavel para manter sequencia convertida */
	char *remainderPtr; /* cria ponteiro em char */

	x = strtoul( string, &remainderPtr, 0 );

	printf( "%s\"%s\"\n%s%lu\n%s\"%s\"\n%s%lu\n",
	      "A string original é ", string,
	      "O valor convertido é ", x,
	      "O resto da string original é ",
	      remainderPtr,
	      "O valor convertido menos 567 é ", x - 567 );
	return 0; /* indica conclusão bem-sucedida */
} /* fim do main */
