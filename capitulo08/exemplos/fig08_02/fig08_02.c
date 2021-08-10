/* Fig. 08.02: fig08_02.c
 * Usando funções isdigit, isalpha, isalnum e isxdigit */
#include <stdio.h>
#include <ctype.h>

int main( void ){

	printf( "%s\n%s%s\n%s%s\n\n", "De acordo com isdigit: ",
	     isdigit( '8' ) ? "8 é um " : "8 não é um", "digito",
	     isdigit( '#' ) ? "# é um " : "# não é um", "digito" );

	printf( "%s\n%s%s\n%s%s\n%s%s\n%s%s\n\n",
	     "De acordo com isalpha:",
	    isalpha( 'A' ) ? "A é uma " : "A não é uma ", "letra",
	    isalpha( 'b' ) ? "b é uma " : "n não é uma ", "letra",
	    isalpha( '&' ) ? "& é uma " : "& não é uma ", "letra",
	    isalpha( '4' ) ? "4 é uma " : "4 não é uma ", "letra");

	printf( "%s\n%s%s\n%s%s\n%s%s\n\n",
	     "De acordo com isalnum",
	     isalnum( 'A' ) ? "A é um " : "A não é um ", "dígito ou uma letra",
	     isalnum( '8' ) ? "8 é um " : "8 não é um ", "dígito ou uma letra",
	     isalnum( '#' ) ? "# é um " : "# não é um ", "dígito ou uma letra");

	printf( "%s\n%s%s\n%s%s\n%s%s\n%s%s\n%s%s\n",
	     "De acordo com isxdigit:",
	     isxdigit( 'F' ) ? "F é um " : "F não é um ", "dígito hexadecimal",
	     isxdigit( 'J' ) ? "J é um " : "J não é um ", "dígito hexadecimal",
	     isxdigit( '7' ) ? "7 é um " : "7 não é um ", "digito hexadecimal",
	     isxdigit( '$' ) ? "$ é um " : "$ não é um ", "dígito hexadecimal",
	     isxdigit( 'f' ) ? "f é um " : "f não é um ", "dígito hexadecimal" );

	return 0; /* indica conclusão bem-sucedida */
} /* fim do main */
