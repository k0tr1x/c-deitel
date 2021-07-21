/* Figura 06.16: fig06_16.c 
   Esse programa introduz o tópico de análise de dados de pesquisa.
   Ele calcula a média, a mediana e a moda dos dados */
#include <stdio.h>
#define SIZE 99

/* protótipo de funções */
void media( const int answer[] );
void mediana( int answer[] );
void moda( int freq[], const int answer[] );
void bubbleSort( int a[] );
void printArray( const int a[] );

/* função main inicia a execução do programa */
int main( void ){

	int frequencia[10] = { 0 }; /* inicializa frequencia do array */

	/* inicializa resposta do array */
	int respostas[ SIZE ] = 
	{ 6, 7, 8, 9, 8, 7, 8, 9, 8 ,9,
	  7, 8, 9, 5, 9, 8 ,7, 8, 7, 8,
	  6, 7, 8, 9, 3, 9, 8, 7, 8, 7,
	  7, 8, 9, 8, 9, 8, 9, 7, 8, 9,
	  6, 7, 8, 7, 8, 7, 9, 8, 9, 2,
	  7, 8, 9, 8, 9, 8, 9, 7, 5, 3,
	  5, 6, 7, 2, 5, 3, 9, 4, 6, 4,
	  7, 8, 9, 6, 8, 7, 8, 9, 7, 8,
	  7, 4, 4, 2, 5, 3, 8, 7, 5, 6,
	  4, 5, 6, 1, 6, 5, 7, 8, 7 };

	/* processa as respostas */
	media( respostas );
	mediana( respostas );
	moda( frequencia, respostas );
	return 0; /* indica conclusão bem-sucedida */
} /* fim do main */

/* calcula média de todos os valores de resposta */
void media( const int answer[] ){

	int j; /* contador para totalizar os elementos dos array */
	int total = 0; /* variavel para manter a soma dos elementos do array */

	printf( "%s\n%s\n%s\n", "********", "   Média", "********" );

	/* valores totais de respostas */
	for( j = 0; j < SIZE; j++ ){
		total += answer[ j ];
	} /* fim do for*/

	printf("A média é o valor médio dos itens de dados.\n"
	       "A média é igual ao total de todos\n"
	       "os tens de dados divididos pelo número\n"
	       "os itens de dados ( %d ). O valor médio para esta\n"
	       "execução é %d / %d = %.4f\n\n", 
	       SIZE, total, SIZE,( double ) total / SIZE);
} /* fim da função media */

/* ordena array e determina valor do elemento mediano */
void mediana( int answer[] ){

	printf("\n%s\n%s\n%s\n%s",
	       "********", "Mediana", "********",
	       "O array de respostas, não é ordenado, é");

	printArray( answer ); /* exibe array não ordenado */

	bubbleSort( answer ); /* ordena array */

	printf( "\n\nO array ordenado é" );
	printArray( answer ); /* exibe array ordenado */

	/* exibe elemento mediano */
	printf( "\n\nA mediana é o elemento %d do\n"
	        "array ordenado de %d elementos.\n"
	        "Para essa execução, a mediana é %d\n\n",
	        SIZE / 2, SIZE, answer[ SIZE / 2 ] );
} /* fim da função mediana*/

/* determina a resposta mais frequente */
void moda(int freq[], const int answer[]){

	int avaliacao;       	/* contador para acessar os elementos 1-9 do array freq */
	int j;			/* contador para resumir os elementos 0-98 do array answer */
	int h;			/* contador para exibir histogramas dos elementos no array freq*/    
	int maior = 0;		/* representa maior frequencia */
	int valorModa = 0;	/* representa resposta mais frequente */

	printf( "\n%s\n%s\n%s\n",
	        "********", "   Moda", "********" );

	/* inicializa frequencias em 0 */
	for( avaliacao = 1; avaliacao <= 9; avaliacao++ ){
		freq[ avaliacao ] = 0;
	} /* fim do for */

	/* frequencias de resumo */
	for( j = 0; j < SIZE; j++ ){
		++freq[ answer[ j ] ];
	} /* fim do for*/

	/* cabeçalhos de impressao para colunas do resultado */
	printf( "%s%11s%19s\n\n%54s\n%54s\n\n",
	        "Resposta", "Frequencia", "Histograma",
	        "1    1    2    2", "5     0    5    0    5" );

	/* exibe os resultados */
	for( avaliacao = 1; avaliacao <= 9; avaliacao++ ){
		printf( "%8d%11d", avaliacao, freq[ avaliacao ] );

		/* acompanha valor da moda e valor de maior frequencia */
		if ( freq[ avaliacao ] > maior ){
			maior = freq[avaliacao];
			valorModa = avaliacao;
		} /* fim do if */

		/* barra de histograma de saída de impressão que representa valor de frequencia */
		for( h = 1; h < freq[ avaliacao ]; h++ ){
		   	printf( "*" );
		} /* fim do for interno*/

		printf( "\n" ); /* sendo nova linha de saída */
	}/* fim do for externo */

	/* exibe o valor da moda */
	printf( "A moda é o valor mais frequente. \n"
	        "Para essa execução, a moda é %d, que ocorreu"
	        " %d vezes.\n", valorModa, maior );
} /* fim da função moda*/

/* função que ordena um array com o algoritmo bubble sort */
void bubbleSort( int a[] ){

	int passar;	/* contador de passada */
	int j;		/* contador de comparação */
	int segurar;	/* local temporário usado para troca de elementos */

	/* loop para controlar numero de passadas */
	for( passar = 1; passar < SIZE; passar++ ){
		
		/* loop para controlar número de comparações por passada */
		for( j = 0; j < SIZE - 1; j++ ){
			
			/* troca elementos se estiverem fora de ordem */
			if( a[ j ] > a[ j + 1 ] ){
				segurar = a[ j ];
				a[ j ] = a[ j + 1 ];
				a[ j + 1 ] = segurar;
			} /* fim do if*/
		} /*fim do for interno*/
	} /* fim do for externo*/
} /*fim da função bubblesort */

/* imprime conteudo do array de resultados( 20 valores por linha ) */
void printArray( const int a[] ){

	int j; /* contador */

	/* imprime conteúdo do array */
	for( j = 0; j < SIZE; j++ ){

		if( j % 20 == 0 ){ /* indica nova linha a cada 20 valores */
		    printf( "\n" );
		} /* fim do if */

		printf( "%2d", a[ j ] );
	} /* fim do for */
} /* fim da função printArray */
