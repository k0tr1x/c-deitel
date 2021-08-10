/* Fig. 07.28: fig07_28.c 
 * Demonstrando um array de ponteiuros para funções */
#include <stdio.h>

/* protótipos */
void function1( int a );
void function2( int b );
void function3( int c );

int main( void ){

	/* inicializa array de 3 ponteiros para funções que usam um 
	 * argumento int e retornam void */
	void(*f[ 3 ])( int ) = { function1, function2, function3 };

	int choice; /* variável para manter escolha do usuário */

	printf( "Digite um número entre 0 e 2, 3 para sair: " );
	scanf( "%d", &choice );

	/* processa escolha do usuário */
	while( choice >= 0 && choice < 3 ){

	    /* chama a função para o local selecionado do array f e passa 
	     * choice como argumento */
		(*f[choice])( choice );

		printf( "Digite um número entre 0 e 2, 3 para terminar: " );
		scanf( "%d", &choice );
	} /* fim do while */

	printf( "Execução do programa concluída.\n" );
	return 0; /* indica conclusão bem-sucedida */
} /* fim do main */

void function1( int a ){

	printf( "Você digitou %d, de modo que function1 foi chamada\n\n", a );
} /* fim da function1 */

void function2( int b ){

	printf( "Você digitou %d, de modo que function2 foi chamada\n\n", b );
} /* fim da function2 */

void function3( int c ){

	printf( "Você digitou %d, de modo que function3 foi chamada\n\n", c );
} /* fim da function3 */
