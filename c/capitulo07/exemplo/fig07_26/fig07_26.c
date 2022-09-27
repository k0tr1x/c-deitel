/* Fig. 07.26: fig07_26.c
   Programa de classificação de múltiplas finalidades usando ponteiros para função */
#include <stdio.h>
#define SIZE 10

/* prototipos */
void bubble( int work[], const int size, int (*compare)(int a, int b) );
int ascending( int a, int b );
int descending( int a, int b );

int main( void ){

	int order; /* 1 para ordem crescente ou 2 para ordem decrescente */
	int contador; /* contador */

	/* inicializa array a */
	int a[ SIZE ] = { 2, 6, 4, 8, 10, 12, 89, 68, 45, 37 };

	printf( "Digite 1 para classificar em ordem crescente,\n"
	        "Digite 2 para classificar em ordem decrescente: " );
	scanf( "%d", &order );

	printf( "\nItens de dados na ordem original\n" );

	/* Mostra o array original */
	for( contador = 0; contador < SIZE; contador++ ){
		printf( "%5d", a[ contador ] );
	} /* fim do for */

	/* classifica array em ordem crescente; passa função crescente como
	 * um argumento para especificar classficação crescente */
	if( order == 1 ){
		bubble( a, SIZE, ascending );
		printf( "\nItens de dados em ordem crescente\n" );
	} /* fim do if */
	else{ /* passa a função decrescente */
		bubble( a, SIZE, descending );
		printf( "\nItens de dados em ordem decrescente\n" );
	} /* Fim do else */

	/* mostra array ordenado */
	for( contador = 0; contador < SIZE; contador++ ){
		printf( "%5d", a[ contador ] );
	} /* fim do for */

	printf( "\n" );
	return 0; /* indica conclusão bem-sucedida */
} /* fim do main */

/* bubble sort de múltipla finalidade; parametro compare é um ponteiro 
 * para a função de comparação que determina classificação */
void bubble( int trabalho[], const int size, int (*compare)(int a, int b) ){

	int passada; /* contador de passadas */
	int contador; /* contador de comparaçãoo */

	void inverte( int *element1Ptr, int *element2Ptr ); /* prototipo */

	/* loop para controlar passadas */
	for( passada = 1; passada < size; passada++ ){
		
		/* loop para controlar numero de comparaçoes por passada */
		for( contador = 0; contador < size - 1; contador++ ){

			/* se elementos adjacentes estão fora da ordem, inverta-os */
			if((*compare)( trabalho[ contador ], trabalho[ contador + 1 ] ) ){
				inverte( &trabalho[ contador ], &trabalho[ contador + 1 ] );
			} /* fim do if*/
		} /* fim do for*/
	} /* fim do for */
} /* fim da função bubble */

/* troca valores nos locais da memoria aos quais element1Ptr e
 * element2Ptr apontam */
void inverte( int *element1Ptr, int *element2Ptr ){

	int manutencao; /* variável de manutemção temporária */

	manutencao = *element1Ptr;
	*element1Ptr = *element2Ptr;
	*element2Ptr = manutencao;
} /* fim do inverte */

/* determina se os elementos estão fora de ordem para uma ordem
 * de classificação crescente */
int ascending( int a, int b ){

	return b < a; /* troca se b for menor que a */
} /* fim da função crescente */

/* determina se os elementos estão fora da ordem para uma ordem
 * de classificação decrescente */
int descending( int a, int b ){

	return b > a; /* troca se b for maior que a */
} /* fim da função decrescente */
