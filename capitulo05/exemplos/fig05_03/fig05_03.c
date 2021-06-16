/* Fig. 5.3: fig05_03.c
   Criando e usando uma função definida pelo programador */
#include <stdio.h>

int square( int y ); /* protótipo da função */

/* função main inicia execução do programa */
int main( void ){

	int x; /* contador */

	/* loop 10 vezes e calcula e exibe quadrado de x a cade vez */
	for( x = 1; x <= 10; x++ ){
		printf("%d ", square( x )); /* chama a função */
	} /* fim do for */

	printf( "\n" );
	return 0; /* indica conclusão bem-sucedida */
} /* fim do main */

/* definição de função square retorna quadrado do parametro */
int square( int y ) { /* y é uma copia do argumento a função */

	return y * y; /* retorna o quadrado de y como um int*/
} /* fim da função square */
