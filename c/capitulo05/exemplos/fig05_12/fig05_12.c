/* Fig. 05.12: fig05_12.c
   Um exemplo de escopo */
#include <stdio.h>

void useLocal ( void );		/* protótipo da função */
void useStaticLocal( void );	/* protótipo da função */
void useGlobal ( void );	/* protótipo da função */

int x = 1; /* variavel global */

/* função main inicia a execução do programa */
int main ( void ){

	int x = 5; /* variavel local para main */

	printf("x local no escopo externo de main é %d\n", x);

	{ /* inicia novo escopo */
		int x = 7; /* variavel local para novo escopo */

		printf("x local no escopo inteiro de main é %d\n", x);
	} /* fim do novo escopo */

	printf("x local no escopo externo de main é %d\n", x);

	useLocal();		/* useLocal tem x local automatica */
	useStaticLocal();	/* useStaticLocal tem x local estatica */
	useGlobal();		/* useGlobal usa x global */
	useLocal();		/* useLocal reinicializa x local automatica */
	useStaticLocal();	/* x local estatica retem seu valor anterior */
	useGlobal();		/* x global tambem retem valor */

	printf( "\nx local em main é %d\n", x );
	return 0; /* indica conclusão bem-sucedida */
} /* fim do main */

/* useLocal reinicializa variavel local x durante cada chamada */
void useLocal( void ){

	int x = 25; /* inicializa toda vez que useLocal é chamada */

	printf("\nx local em useLocal é %d após entrar em useLocal\n", x);
	x++;
	printf("x local em useLocal é %d antes de sair de useLocal\n", x);
} /* fim da função useLocal */

/* useStaticLocal inicializa variavel local estatica x somente na 
 * primeira vez em que essa função é chamada; o valor de x é
 * salvo entre as chamadas a essa função */
void useStaticLocal( void ){

	/* inicializa apenas na primeira vez que useStaticLocal é chamada */
	static int x = 50;
	
	printf("\nx estatica local é %d na entrada de useStaticLocal\n", x);
	x++;
	printf( "x estatica local é %d na saida de useStaticLocal\n", x);
} /* fim da função useStaticLocal */

/* função useGlobal modifica variavel global x durante cada chamada */
void useGlobal( void ){
	
	printf( "\nx global é %d na entrada de useGlobal\n", x);
	x*=10;
	printf( "x global é %d na saida de useGlobal\n", x);
} /* fim da função useGlobal */
