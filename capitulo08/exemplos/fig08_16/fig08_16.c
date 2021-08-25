/* Fig. 08.16: fig08_16.c
   Usando sscanf */
#include <stdio.h>

int main( void ){

	char s[] = "31298 87.375"; /* inicializa array s*/
	int x; /* valor x a ser inserido */
	double y; /* valor y a ser inserido */

	sscanf( s, "%d%lf", &x, &y );
	printf( "%s\n%s%6d\n%s%8.3f\n",
	        "Os valores armazenados no array de caracteres s são",
	        "integer:", x, "double", y );
	return 0; /* indica conclusão bem-sucedida */
} /* fim do main */
