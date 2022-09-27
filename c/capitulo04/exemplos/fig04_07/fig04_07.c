/* Fig. 4.7: fig04_07.c 
   Contando notas de letra */
#include <stdio.h>

/* Função main inicia a execução do programa */
int main( void ){

	int nota;	/* Uma nota */
	int aCont;	/* número de As */
	int bCont;	/* número de Bs */
	int cCont;	/* número de Cs */
	int dCont;	/* número de Ds */
	int fCont;	/* número de Fs */

	printf( "Digite as notas em letra.\n" );
	printf( "Digite o caractere EOF para encerrar a entrada.\n");

	/* loop até que o usuário digite sequência de fim de arquivo */
	while( ( nota = getchar() ) != EOF ){

		/* determina qual nota foi digitada */
		switch ( nota ){ /* switch aninhado no while */

			case 'A':	/* nota foi 'A' maiúsculo */
			case 'a':	/* nota foi 'a' minúsculo */
			    ++aCont;	/* incrementar aCont */
			    break;	/* necessário para sair do switch */

			case 'B':
			case 'b':
			    ++bCont;
			    break;

			case 'C':
			case 'c':
			    ++cCont;
			    break;

			case 'D':
			case 'd':			
			    ++dCont;
			    break;

			case 'F':
			case 'f':
			    ++fCont;
			    break;

			case '\n': /* ignora caracteres de novo linha */
			case '\t': /* tabulações */
			case ' ':  /* e espaços na estrada */
			    break; /* sai do switch*/

			default: /* apanha todos os outros caracteres */
			    printf( "Letra de nota incorreta." );
			    printf( " Digite nova nota.\n");
			    break; /* opcional; sairá do switch de qualquer forma*/
		} /* fim do switch*/
	} /*Fim do while*/

	/* saída de resumo dos resultados */
	printf( "\nTotais para cada nota são:\n" );
	printf( "A: %d\n", aCont );
	printf( "B: %d\n", bCont );
	printf( "C: %d\n", cCont );
	printf( "D: %d\n", dCont );
	printf( "F: %d\n", fCont );
	return 0;
} /* Fim da função main */

