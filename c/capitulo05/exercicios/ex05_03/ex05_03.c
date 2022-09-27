/* ex05_03.c */
/* Testando as funções da biblioteca matemática */
#include <stdio.h>
#include <math.h>

/* função main inicia a execução do programa */
int main( void ){

	/* calcula e informa a raiz quadrada */
	printf( "sqrt(%.1f) = %.1f\n", 900.0, sqrt( 900.0 ) );
	printf( "sqrt(%.1f) = %.1f\n", 9.0, sqrt( 9.0 ) );

	/* calcula e informa a função exponencial e elevada a x */
	printf( "exp(%.1f) = %f\n", 1.0, exp( 1.0 ) );
	printf( "exp(%.1f) = %f\n", 2.0, exp( 2.0 ) );

	/* calcula e informa o lagritmo (base e) */
	printf( "log(%f) = %.1f\n", 2.718282, log( 2.718282 ) );
	printf( "log(%f) = %.1f\n", 7.389056, log( 7.389056 ) );

	/* calcula e apresenta o logaritmo (base 10) */
	printf( "log10(%.1f) = %.1f\n", 1.0, log10( 1.0 ) );
	printf( "log10(%.1f) = %.1f\n", 10.0, log10( 10.0 ) );
	printf( "log10(%.1f) = %.1f\n", 100.0, log10( 100.0 ) );

	/* calcula e apresenta o valor absoluto */
	printf( "fabs(%.1f) = %.1f\n", 13.5, fabs( 13.5 ) );
	printf( "fabs(%.1f) = %.1f\n", 0.0, fabs( 0.0 ) );
	printf( "fabs(%.1f) = %.1f\n", -13.5, fabs( -13.5 ) );

	/* calcula e informa ceil( x )*/
	printf( "ceil(%.1f) = %.1f\n", 9.2, ceil( 9.2 ) );
	printf( "ceil(%.1f) = %.1f\n", -9.8, ceil( -9.8 ) );

	/* calcula e informa floor( x ) */
	printf( "floor(%.1f) = %.1f\n", 9.2, floor( 9.2 ) );
	printf( "floor(%.1f) = %.1f\n", -9.8, floor( -9.8 ) );

	/* calcula e informa pow( x, y ) */
	printf( "pow(%.1f, %.1f) = %.1f\n", 2.0, 7.0, pow( 2.0, 7.0 ) );
	printf( "pow(%.1f, %.1f) = %.1f\n", 9.0, 0.5, pow( 9.0, 0.5 ) );

	/* calcula e informa fmod( x, y ) */
	printf( "fmod(%.3f/%.3f) = %.3f\n", 13.675, 2.333, fmod( 13.675, 2.333 ) );
	
	/* calcula e informa sin( x ) */
	printf( "sin(%.1f) = %.1f\n", 0.0, sin( 0.0 ) );

	/* calcula e informa cos( x ) */
	printf( "cos(%.1f) = %.1f\n", 0.0, cos( 0.0 ) );

	/* calcula e informa tan( x ) */
	printf( "tan(%.1f) = %.1f\n", 0.0, tan( 0.0 ) );

	return 0; /* indica conclusão bem-sucedida */
} /* fim do main */
