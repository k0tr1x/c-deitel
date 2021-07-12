/* exercicio 05_42.c */

#include <stdio.h>

/* função main inicia a execução do programa */
int main( void ){

	int c; /* variável para manter entrada de caractere pelo usuário */

	if(( c = getchar() ) !=EOF ){
		main();
		printf( "%c", c );
	} /* fim do if */

	return 0; /* indica conclusão bem-sucedida */
} /* fim do main */
