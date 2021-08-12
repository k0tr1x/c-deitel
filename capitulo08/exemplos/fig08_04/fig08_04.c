/* Fig. 08.04: fig08_04.c
 * Usando funções isspace, iscntrl, isprint, isgraph */
#include <stdio.h>
#include <ctype.h>

int main( void ){

	printf( "%s\n%s%s%s\n%s%s%s\n%s%s\n\n", 
	     "De acordo com isspace",
	     "Newline", isspace( '\n' ) ? " é um " : " não é um",
	     "caractere de espaço em branco", "Tabulação horizontal",
	     isspace( '\t' ) ? " é um " : " não é um ",
	     "caractere de espaço em branco",
	     isspace( '%' ) ? "% é um " : "% não é um ",
	     "caractere de espaço em branco" );

	printf( "%s\n%s%s%s\n%s%s\n\n", "De acordo com iscntrl:",
	     "Newline", iscntrl( '\n' ) ? " é um " : " não é um ",
	     "caractere de controle", iscntrl( '$' ) ? "$ é um" : 
	     "$ não é um ", "caractere de controle" );

	printf( "%s\n%s%s\n%s%s\n%s%s\n\n",
	      "De acordo com ispunct:",
	      ispunct( ';' ) ? "; é um " : "; não é um ",
	      "caractere de pontuação",
	      ispunct( 'Y' ) ? "Y é um " : "Y não é um ",
	      "caractere de pontuação",
	      ispunct( '#' ) ? "# é um " : "# não é um ",
	      "caractere de pontuação" );

	printf( "%s\n%s%s\n%s%s%s\n\n", "De acordo com isprint:",
	      isprint( '$' ) ? "$ é um " : "$ não é um ",
	      "caractere imprimivel",
	      "Alert", isprint( '\a' ) ? " é um " : " não é um ",
	      "caractere imprimivel" );

	printf( "%s\n%s%s\n%s%s%s\n", "De acordo com isgraph:",
	     isgraph( 'Q' ) ? "Q é um " : "Q não é um ",
	     "caractere imprimivel diferente de um espaço",
	     "Space", isgraph( ' ' ) ? " é um " : " não é um ",
	     "caractere imprimivel diferente de um espaço" );
	return 0;
} /* fim do main*/
