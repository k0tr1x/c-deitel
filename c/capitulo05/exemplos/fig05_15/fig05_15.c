/* Fig. 05.15: fig05_15.c
   Função recursiva fibonacci */
#include<stdio.h>

long fibonacci( long n ); /* protótipo da função */

/* função main inicia a execução do programa */
int main( void ){

	long resultado; /* valor de fibonacci */
	long numero;	/* número fornecido pelo usuário */

	/* obtém inteiro do usuário */
	printf( "Digite um inteiro: " );
	scanf("%ld", &numero);

	/* calcula valor de fibonacci para número informado pelo usuário */
	resultado = fibonacci(numero);

	/* mostra resultado */
	printf("Fibonacci( %ld ) = %ld\n", numero, resultado);
	return 0; /* indica conclusão bem-sucedida */
} /* fim do main */

/* Definição recursiva da função fibonacci */
long fibonacci( long n ){

	/* caso básico */
	if( n == 0 | n == 1 ){
		return n;
	} /* fim do if */
	else { /* etapa recursiva */
	    return fibonacci( n - 1 ) + fibonacci( n - 2);
	} /* fim do else */
} /* fim da função fibonacci */
