/* Figura 3.13: fig03_13.c
   Pré-incrementando e pós-incrementando */
#include <stdio.h>

/* função main inicia a execução do programa */
int main( void ){

	int c; /* define a variável */

	/* demonstra pós-incremento */
	c = 5;			 /* demonstra pós-incremento */
	printf("%d\n", c); 	/* imprime 5 */
	printf("%d\n", c++); 	/* imprime 5 e depois pós-incrementa */
	printf("%d\n\n", c); 	/* imprime 6 */

	/* demonstra pré incremento */
	c = 5; 			/* atribui 5 a c */
	printf("%d\n", c); 	/* imprime 5 */
	printf("%d\n", ++c); 	/* pós-incrementa e depois imprime 6 */
	printf("%d\n", c);	/* imprime 6 */

	return 0; /* indica que o programa foi concluido com sucesso */
} /* fim da função main */
