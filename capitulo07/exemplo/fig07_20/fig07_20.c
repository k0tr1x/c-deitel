 /* Fig. 07_20: fig07_20.c
    Usando notações de subcrito e ponteiro com arrays */

#include <stdio.h>

int main( void ){

	int b[] = {10, 20, 30, 40}; /* inicializando array b */
	int *bPtr = b; /* define bPtr para apontar para array b*/
	int i; /* contador */
	int offset; /* contador */

	/* Mostra array b usando notação de subscrito de array */
	printf( "Array b impresso com:\nNotação de subscrito de array\n" );

	/* loop pelo array b */
	for( i = 0; i < 4; i++ ){
		printf( "b[ %d ] = %d\n", i, b[ i ] );
	} /* fim do for */

	/* mostra array b usando nome do array e notação de ponteiro/descocamento*/
	printf("\nNotação de ponteiro/offset onde\n"
	       "o ponteiro é o nome do array\n");

	/* loop pelo array b */
	for( offset = 0; offset < 4; offset++ ){
		printf("*( b + %d ) = %d\n", offset, *( b + offset ));
	} /* fim do for */

	/* mostra array b usando bPtr e notação de subscrito de array */
	printf( "\nNotação de subscrito de ponteiro\n" );

	/* loop pelo array b */
	for( i = 0; i < 4; i++ ){
		printf( "bPtr[ %d ] = %d\n", i, bPtr[ i ] );
	} /* fim do for */

	/* mostra array b usando bPtr e notação de ponteir/deslocamento */
	printf( "\nNotação de ponteiro/deslocamento\n" );

	/* loop pelo array b */
	for( offset = 0; offset < 4; offset++ ){
		printf( "*(bPtr + %d) = %d\n", offset, *( bPtr + offset ) );
	} /* fim do for */

	return 0; /* indica conclusão bem-sucedida */
} /* fim do main */
