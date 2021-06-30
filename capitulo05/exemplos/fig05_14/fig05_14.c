/* Fig. 05.14: fig05_14.c
   Função recursiva fatorial */
#include <stdio.h>

long fatorial ( long numero ); /* prototipo de função */

/* função main inicia a execução do programa */
int main( void ){

	int i; /* contador */

	/* loop 11 vezes; durante cada iteração, calcula
	 * fatorial( i ) e mostra o resultado */
	for ( i = 0; i <= 10; i++ ){
		printf( "%2d! = %ld\n", i, fatorial(i) );
	} /*fim do for */

	return 0; /* indica conclusão bem-sucedida */
} /* fim do main*/

/* definição recursiva da função fatorial */
long fatorial(long numero){

	/* caso basico */
	if( numero <= 1 ){
		return 1;
	} /* fim do if*/
	else{
		return (numero * fatorial(numero - 1));
	} /*fim do else */
} /* fim da função fatorial */
