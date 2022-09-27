/* ex07_19.c */
/* O que esse programa faz */
/* Esse programa concatena duas strings */
#include<stdio.h>

void mystery1( char *s1, const char *s2 ); /* prototipo */

int main( void ){

	char string1[ 80 ]; /* cria char array */
	char string2[ 80 ]; /* cria char array */

	printf( "Digite duas strings: " );
	scanf( "%s%s", string1, string2 );
	mystery1( string1, string2 );
	printf( "%s\n", string1 );
	return 0; /* indica conclusão bem-sucedida */
}/* fim do main */

/* O que essa função faz? */
void mystery1( char *s1, const char *s2 ){

	while( *s1 != '\0' ){
		s1++;
	} /* fim do while */

	for( ; *s1 = *s2; s1++, s2++ ){
		; /* sem comando */
	} /* fim do for */
} /* fim da função mystery1 */
