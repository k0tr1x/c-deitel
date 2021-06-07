/* Figura 3.8: fig03_08.c 
   Programa de média da turma com repetição controlada por sentinela */
#include <stdio.h>

/* função main inicia execução do programa */
int main( void ){
	int contador;	/* número de notas digitadas*/
	int nota; 	/* valor da nota */
	int total;	/* soma das notas */

	float media; /* número em ponto flutuante para a média */

	/* fase de inicialização */
	total = 0; 	/* inicializa o total */
	contador = 0;   /* inicializa contador do loop */

	/* fase de processamento */
	/* recebe primeira nota do usuário */

	printf("Digite a nota, -1 no fim: "); /* prompt de entrada */
	scanf("%d", &nota); /* lê nota do usuário */

	/* loop enquanto valor da sentinela não foi lido*/
	while( nota != -1 ){
		
		total = total + nota;	 /* soma nota ao total */
		contador = contador + 1; /* incrementa contador */
		
		/* recebe próxima nota do usuário */
		printf("Digite a nota, -1 para finalizar: ");
		scanf("%d", &nota); /* lê próxima nota */
	} /* fim do while */

	/* fase de finalização */
	/* se o usuário digitou pelo menos uma nota*/
	if (contador !=0){

		/* calcula média de todas as notas lidas*/
		media = ( float ) total / contador; /* evita truncar */

		/* exibir média com dois digitos de precisão */
		printf("Média da turma é %.2f\n", media);
	} /* fim do if */
	else { /* se nenhuma nota foi informada, envia mensagem */
		printf("Nenhuma nota foi informada\n");
	} /* fim do else */

	return 0; /* indica que o programa foi concluido com sucesso*/

} /* fim do main */
