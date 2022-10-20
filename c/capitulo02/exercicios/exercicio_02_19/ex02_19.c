/*
Exercício 02_19:
    Aritimetica, maior, menor. Escreva um programa que leia três inteiros diferentes do teclado, depois apresente a soma, a média, o produto, o menor e o maior desses números. Use apenas
    a forma de seleção unica instrução if que você aprendeu neste capitulo.O dialogo na tela deverá aparecer da seguinte forma:
    -------------------------------------------------
    Digite três inteiros diferenes: 13 27 14
    A soma é 54
    A media é 18
    O Produto é 4914
    O menor é 13
    O maior é 27

*/

#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL,"portuguese");
    int num1, num2, num3, soma, media, produto;

    printf("Escolha 1° número inteiro:\n");
    scanf("%d", &num1);

    printf("Escolha 2° número inteiro:\n");
    scanf("%d", &num2);

    printf("Escolha 3° número inteiro:\n");
    scanf("%d", &num3);

    printf("num1 = %d | num2 = %d | num3 = %d\n", num1, num2, num3);

    soma = num1 + num2 + num3;
    printf("A SOMA É %d.\n", soma);

    media = (num1 + num2 + num3) / 3;
    printf("A MÉDIA É %d.\n", media);

    produto = num1 * num2 * num3;
    printf("O PRODUTO É %d.\n", produto);

    if (num1 > num2){
        double maior = num1;
        num1 = num2;
        num2 = maior;
    }

    if (num2 > num3){
            double maior = num2;
            num2 = num3;
            num3 = maior;
    }

    printf("O MAIOR É %d\n", num3);

    if (num1 < num2){
        double menor = num1;
        num1 = num2;
        num2 = menor;
    }

    if (num2 < num3){
            double menor = num2;
            num2 = num3;
            num3 = menor;
    }

    printf("O MENOR É %d\n", num3);

    return 0;
}
