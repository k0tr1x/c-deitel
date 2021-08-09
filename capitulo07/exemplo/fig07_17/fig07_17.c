/* Fig. 07.17: fig07_17.c
   Demonstrando o operador sizeof */
#include <stdio.h>

int main( void ){

	char c;
	short s;
	int i;
	long l;
	float f;
	double d;
	long double ld;
	int array[ 20 ];  /* cria um array de 20 elementos int */
	int *ptr = array; /* cria ponteiro para array */

	printf( "	sizeof c = %ld\tsizeof(char) = %ld"
	        "\n	sizeof s = %ld\tsizeof(short) = %ld"
	        "\n	sizeof i = %ld\tsizeof(int) = %ld"
	        "\n	sizeof l = %ld\tsizeof(long) = %ld"
	        "\n	sizeof f = %ld\tsizeof(float) = %ld"
	        "\n	sizeof d = %ld\tsizeof(double) = %ld"
	        "\n	sizeof ld = %ld\tsizeof(long double) = %ld"
	        "\n sizeof array = %ld"
	        "\n   sizeof ptr = %ld\n",
	        sizeof c, sizeof( char ), sizeof s, sizeof( short ), sizeof i,
	        sizeof( int ), sizeof l, sizeof( long ), sizeof f, 
		sizeof( float ), sizeof d, sizeof( double ), sizeof ld,
	        sizeof( long double ), sizeof array, sizeof ptr );
	return 0; /* indica conclusao bem-sucedida */
} /* fim do main */
