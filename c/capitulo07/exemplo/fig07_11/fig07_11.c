/* Fig. 07.11: fig07_11.c
   Imprimindo uma string um caractere por vez usando
   um ponteiro não constante para dados constantes */

#include <stdio.h>

void printCharacters( const char *sPtr );

int main( void ){

	/* inicializa array de char */
	char string[] = "imprime caracteres de uma string";

	printf( "A string é:\n" );
	printCharacters( string );
	printf( "\n" );
	return 0; /* indica conclusão bem-sucedida */
} /* fim do main */

/* sPtr não pode modificar o caractere ao qual aponta,
   ou seja, sPTr é um ponteiro "somente de leitura" */
void printCharacters( const char *sPtr ){

	/* loop pela string inteira */
	for( ; *sPtr != '\0'; sPtr++ ){ /* sem inicialização */
		printf( "%c", *sPtr );
	} /* fim do for */
} /* fim da função printCharacters */
