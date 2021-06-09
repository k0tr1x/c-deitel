/* Fig. 4.2: fig04_02.c
   Repetição controlada por contador com a estrutura for */
#include <stdio.h>

/* função main inicia a execução do programa */
int main( void ){
	int contador; /* declara o contador */

	/* inicialização, condição de repetição e incremento
	   são todos incluido no cabeçalho da estrutura for */

	for(contador = 1; contador <= 10; contador++){
		printf("%d\n", contador);
	} /* fim do for */

	return 0;
}/* fim da função main */
