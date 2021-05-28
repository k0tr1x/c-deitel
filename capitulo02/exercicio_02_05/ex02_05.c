/* Calcula o produto de três inteiros */
#include <stdio.h>

int main( void ){

	int x, y, z, resultado; /* declara variáveis */

	printf( "Digite três inteiros: " ); /* prompt */
	
	scanf("%d%d%d", &x,&y,&z); /* lê três inteiros */
	
	resultado = x * y * z; /* multiplica os valores */
	
	printf("O produto é %d\n", resultado);

} /* fim da função main*/
