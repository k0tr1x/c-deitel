/* Fig. 04_05: fig04_05.c
   Somatório com for */
#include <stdio.h>

/* Função main inicia a execução do programa */
int main( void ){
	int soma = 0; /* inicializa soma */
	int numero;   /* número a ser acescido a soma */

	for( numero = 2; numero <= 100; numero += 2 ){
		printf("%d + %d = %d\n", numero, soma, (numero+soma));
		soma += numero; /*adiciona numero a soma */
	} /* fim do for*/

	printf("Soma é %d\n", soma); /* exibe soma */;

	return 0; /* indica que o programa foi concluido com sucesso */

} /* fim da função main */
