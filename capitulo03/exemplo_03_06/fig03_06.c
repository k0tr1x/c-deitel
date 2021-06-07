/* Figura 3.6: fig03_06.c
   Programa de média da turma com repetição controlada por contador */
#include <stdio.h>

/* função main inicia execução do programam */
int main( void ){

	int contador; 	/* número da nota a digitar em seguida */
	int nota; 	/* valor da nota */
	int total;	/* soma das notas inseridas pelo usuário */
	int media; 	/* média das notas */


	/* Fase de inicialização */
	total = 0;	/* inicializa total */
	contador = 1;   /* inicializa contador do loop */

	/* fase de processamento */
	while( contador <= 10 ) {		/* loop 10 vezes */
		printf("digite uma nota: ");	/* prompt para inserção */
		scanf( "%d", &nota );		/* lê a nota do usuário */
		total = total + nota;		/* soma nota ao total */
		contador = contador +1;		/* incrementa contador */
	} /* fim do while */

	/* fase de término */
	media = total / 10; /* divisão de inteiros */

	printf("Média da turma é %d\n", media); /* exibe resultado */

	return 0; /* indica que programa foi concluido com sucesso */

} /* fim da funçõa main */
