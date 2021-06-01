/* Figura 3.10: fig03_10.c
   Analise de resultados de exame */
#include <stdio.h>

/* Função main indica execução do programa */
int main( void ){

	/* inicializa variáveis nas declarações */
	int aprovados = 0;  /* número de aprovações */
	int reprovados = 0; /* número de reprovações*/
	int aluno = 1;      /* contador de alunos */
	int resultado;      /* um resultado de exame */

	/* Processa 10 alunos usando loop controlado por contador */
	while( aluno <= 10 ){

		/* pede entrada do usuário e lê o valor digitado */
		printf("Forneça resultado (1=aprovados, 2=reprovados): ");
		scanf("%d", &resultado);

		/* Se resultado 1, incrementa aprovados */
		if( resultado == 1 ){
			aprovados = aprovados + 1;
		} /* fim do if */
		else { /* semão, incrementa reprovados */
			reprovados = reprovados +1;
		} /* fim do else*/

		aluno = aluno + 1; /* incrementa contador de alunos */

	} /* Fim do while */

	/* fase de finalização; exibe número de aprovados e reprovados */
	printf("Aprovados: %d\n", aprovados);
	printf("Reprovados: %d\n", reprovados);

	/* Se mais de oito aprovados, imprime 'Bônus ao instrutor!' */
	if( aprovados > 8 ){
		printf("Bônus do Instrutor!\n");
	} /*fim do if */

	return 0; /* Indica que o programa terminou com sucesso */
} /* fim da função main */

