/* Fig. 07.15: fig07_15.c
   Esse programa coloca valores em um array, ordena os valores em 
   ordem crescente e imprime o array resultante. */
#include <stdio.h>
#define SIZE 10

void bubbleSort( int * const array, const int size ); /* prototipo */

int main( void ){

	/* inicializa array a */
	int a[SIZE] = { 2, 6, 4, 8, 10, 12, 89, 68, 45, 37 };

	int i; /* contador */

	printf( "Itens de dados na ordem original\n" );

	/* loop pelo array a */
	for( i = 0; i < SIZE; i++ ){
		printf( "%4d", a[ i ] );
	} /* fim do for */

	bubbleSort( a, SIZE ); /* ordena o array */

	printf( "\nItens de dados em ordem crescente\n" );

	/* loop pelo array a */
	for( i = 0; i < SIZE; i++ ){
		printf( "%4d", a[ i ] );
	} /* fim do for */

	printf( "\n" );
	return 0; /* indica conclusao bem-sucedida */
} /* fim do main */

/* ordena um array de inteiros usando algoritmo bubble sort */
void bubbleSort( int * const array, const int size ){

	void swap( int *element1Ptr, int *element2Ptr ); /* prototipo */
	int pass; /* contador de passadas */
	int j; /* contador de comparação */

	/* loop para controlar passadas */
	for( pass = 0; pass < size - 1; pass++ ){

		/* loop para controlar comparações durando cada passada */
		for( j = 0; j < size - 1; j++ ){

			/* troca elementos adjacentes se estiverem fora de ordem*/
			if( array[ j ] > array[ j + 1 ] ){
				swap( &array[ j ], &array[ j + 1 ] );
			} /* fim do if */
		} /* fim do for interno */
	} /* fim do for externo */
} /* fim da função bubbleSort */

/* troca valores nos locais da memória apontados por element1Ptr */

void swap( int *element1Ptr, int *element2Ptr ){

	int hold = *element1Ptr;
	*element1Ptr = *element2Ptr;
	*element2Ptr = hold;
} /* fim da função swap */
