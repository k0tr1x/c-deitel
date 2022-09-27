/* ex07_20.c */
/* O que esse programa faz ? */
/* Esse programa, soma a quantidade de números */
#include<stdio.h>

int mystery2( const char *s ); /* protótipo */

int main( void ){

	char string[ 80 ]; /* cria array char */

	printf( "Digite uma string: " );
	scanf( "%s", string );
	printf( "%d\n", mystery2( string ) );
	return 0; /* indica conclusão bem-sucedida */
} /* fim do main */

/* O que essa função faz? */
int mystery2( const char *s ){

	int x; /* contador */

	/* loop pela string */
	for( x = 0; *s != '\0'; s++ ){
		x++;
	} /* fim do for */

	return x;
}/* fim da função mystery2 */
