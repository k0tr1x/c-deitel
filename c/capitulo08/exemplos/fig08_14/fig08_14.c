/* Fig. 08.14: fig08_14.c
 * Usando getchar e puts */
#include <stdio.h>

int main( void ){

	char c; /* variável para manter caractere digitado pelo usuario*/
	char sentence[ 80 ]; /* cria um array de char */
	int i = 0; /* inicializa o contador */

	/* pede ao usuário que digite linha de texto */
	puts( "Digite uma linha de texto:" );

	/* usa getchar para ler cada caractere */
	while( ( c = getchar() ) != '\n' ){
		sentence[ i++ ] = c;
	} /* fim do while */

	sentence[ i ] = '\0'; /* finaliza string */

	/* usa puts para exibir a sentença */
	puts( "\nA linha digitada foi:" );
	puts( sentence );
	return 0; /* indica final bem-sucedido*/
} /* fim do main*/
