// Aritmética. Escreva um programa que peça ao usuário
// que digite dois números, obtenha esses números e
// imprima a soma, o produto, a diferença, o quociente e o
// módulo (resto da divisão).

#include <stdio.h>

int main(){

    int num1, num2, soma, subtracao, multiplicacao, divisao, resto;

    printf("Escolha um número: \n");

    scanf("%d", &num1);

    printf("Escolha outro número: \n");

    scanf("%d", &num2);

    printf("Número1: %d, Número2: %d\n", num1, num2);

    soma = num1 + num2;

    printf("Soma: %d + %d = %d\n", num1, num2, soma);

    subtracao = num1 - num2;

    printf("Subtração: %d - %d = %d\n", num1, num2, subtracao);

    multiplicacao = num1 * num2;

    printf("Multiplicação: %d * %d = %d\n", num1, num2, multiplicacao);

    divisao = num1 / num2;

    printf("Divisão: %d / %d = %d\n", num1, num2, divisao);

    printf("Resto: %i\n", num1 % num2);

    return 0;
}
