/* Fig. 4.9: fig04_09.c
   Usando a estrutura de repetição do/while */
#include <stdio.h>

/* Função main inicia a execução do programa */
int main( void ){
	int contador = 1; /* inicializa contador */

	do{
		printf("%d ", contador); /* exibe contador */
	}while (++contador <= 10 ); /* fim de do... while */

	printf("\n");

	return 0; /* indica que o programa foi concluído com sucesso */
} /* fim da função main */
