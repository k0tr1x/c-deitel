#include <stdio.h>

int mystery( int a, int b ); /* protótipo de função */

/* função main inicia a execução do programa */
int main( void ){

	int x; /* primeiro inteiro */
	int y; /* segundo inteiro */

	printf( "Digite dois inteiros: " );
	scanf( "%d%d", &x, &y );

	printf( "O resultado é %d\n", mystery( x, y ) );
	return 0; /* indica conclusão bem-sucedida*/
} /* fim do main */

/* Parametro b deve ser um inteiro positivo, para impedir recursão infinita*/
int mystery( int a, int b ){
	/* caso básico */
	if ( b == 1 ){
		return a;
	} /* fim do if */
	else { /* etapa recursiva */
		return a + mystery( a, b - 1 );
	} /* fim do else */
} /* fim da função mystery */
