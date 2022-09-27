/* Figura 06.11: fig06_11.c
   Arrays estáticos são inicializados em zero */
#include <stdio.h>

void staticArrayInit( void ); /* protótipo de função */
void automaticArrayInit( void ); /* protótipo de função */

/* função main inicia a execução do programa */
int main( void ){

	printf( "Primeira chamada para cada função:\n" );
	staticArrayInit();
	automaticArrayInit();

	printf("\n\nSegunda chamada para cada função:\n");
	staticArrayInit();
	automaticArrayInit;

	printf("\n");
	return 0; /* indica conclusão bem-sucedida */
} /* fim do main */

/* função para demonstrar um array local estático */
void staticArrayInit( void ){

	/* inicializa elementos em 0 na primeira vez que a função é chamada */
	static int array1[ 3 ];
	int i; /* contador */

	printf( "\nValores na entrada de staticArrayInit:\n" );

	/* mostra conteúdo de array1 */
	for ( i = 0; i <= 2; i++ ){
		printf( "array1[ %d ] = %d ", i, array1[ i ] );
	} /* fim do for */

	printf( "\nValores na saída de staticArrayInit: \n" );

	/* modifica e mostra conteúdo de array1 */
	for ( i = 0; i <= 2; i++ ){
		printf( "array1[ %d ] = %d ", i, array1[ i ] += 5 );
	} /* fim do for */
} /* fim da função staticArrayInit */

/* função para demonstrar um array lógico automático */
void automaticArrayInit( void ){

	/* inicializa elementos toda vez que a função é chamada */
	int array2[ 3 ] = { 1, 2, 3 };
	int i; /* contador */

	printf( "\n\nValores na entrada de automaticArrayInit: \n" );

	/* exibe conteúdo de array2 */
	for ( i = 0; i <= 2; i++ ) {
		printf( "array2[ %d ] = %d ", i, array2[ i ] );
	} /* fim do for */

	printf( "\nValores na saída de automaticArrayInit: \n" );

	/* modifica e exibe conteúdo de array2 */
	for ( i = 0; i <= 2; i++ ){
		printf( "array2[ %d ] = %d ", i, array2[ i ] += 5 );
	} /* fim do for */
} /* fim da função automaticArrayInit */
