/* Fig. 07.16: fig07_16.c
   A aplicação de sizeof a um nome de array retorna
   o numero de bytes no array */
#include <stdio.h>

size_t getSize( float *ptr ); /* prototipo */

int main( void ){

	float array[ 20 ]; /* cria array */

	printf("O número de bytes no array é %ld"
	       "\nO número de bytes retornados por getSize é %ld\n",
	       sizeof( array ), getSize( array ));
	return 0; /* indica conclusão bem-sucedida */
} /* fim do main */

/* retorna tamanho de ptr */
size_t getSize( float *ptr ){
	
	return sizeof( ptr );
} /* fim da função getSize */
