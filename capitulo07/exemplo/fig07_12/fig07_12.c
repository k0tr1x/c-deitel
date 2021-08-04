/* Fig. 07.12: fig07_12.c
   Tentando modificar dados por meio de um 
   ponteiro não constante para dados não constantes */
#include <stdio.h>
void f( const int *xPtr ); /* protótipo */


int main( void ){

	int y; /* define y */

	f( &y ); /* f tenta modificação ilegal */
	return 0; /* indica conclusão bem-sucedida */
} /* fim da função f */

/* xPtr não pode ser usado para modificar o valor 
   da variavel a qual ele aponta */
void f( const int *xPtr ){

	*xPtr = 100; /* erro: não pode mudificar um objeto const */
} /* fim da função f */
