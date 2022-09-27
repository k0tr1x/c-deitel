/* Fig. 07;14: fig07_14.c
 * Tentando modificar um ponteiro constande de dados constantes */
#include<stdio.h>

int main( void ){

	int x = 5; /* inicializa */
	int y; /* define */

	/* ptr é um ponteiro constante para um inteiro constante. ptr sempre
	 * aponta o mesmo local; o inteiro nesse local
	 * não pode ser modificado */
	const int *const ptr = &x;

	printf( "%d\n", *ptr );
	*ptr = 7; /* erro: *ptr é const: não pode atribuir novo valor */
	ptr = &y; /* erro: ptr é const; não pode atribuir novo endereço*/
	return 0; /* indica conclusão bem-sucedida */
} /* fim do main */
