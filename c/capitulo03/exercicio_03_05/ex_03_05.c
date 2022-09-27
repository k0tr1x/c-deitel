/* Calcula a soma dos inteiros de 1 a 10 */
#include <stdio.h>

int main( void ){

	int soma, x; /* declara variaveis soma */

	x = 1; /* inicializa x */
	soma = 0; /* inicializa soma */

	while( x<=10 ){ /* loop while x é menor ou igual a 10 */
		soma += x; /* soma x à variavel soma */
		++x; /* incrementa x */
	} /*fim do while */

	printf("A soma é: %d\n", soma); /* exibe a soma */

	return 0;
} /* fim da função main */
