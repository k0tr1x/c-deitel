/* Figura 04.01: fig04_01.c
   Repetição controlada por contador */
#include <stdio.h>

/* função main inicia a execução do programa */
int main( void ){

	 int contador = 1; /* inicialização */
    	
	 while ( contador <= 10 ){ /* condição de repetição */
		printf("%d\n", contador); /* condição de repetição */
		++contador; /* incrementa */
	 } /*fim do while*/

	 return 0; /* indica que o programa foi concluido com sucesso */
} /* fim da função main */
