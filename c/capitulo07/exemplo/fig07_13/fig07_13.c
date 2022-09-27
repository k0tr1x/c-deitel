/* Fig. 07.13: fig07_13.c
   Tentando modificar um ponteiro constante para dados não constantes */
#include <stdio.h>

int main( void ){

	int x; /* define x */
	int y; /* define y */

	/* ptr é um ponteiro constante para um inteiro que pode ser modificado por
	   por meio de ptr, mas ptr sempre aponta para o mesmo local da memoria.*/
	int * const ptr = &x;

	*ptr = 7; /* permitido *ptr não é const */
	ptr = &y; /* erro: ptr é const: não pode atribuir novo endereço */
	return 0; /* indica a conclusão bem-sucedida */
} /* fim do main */
