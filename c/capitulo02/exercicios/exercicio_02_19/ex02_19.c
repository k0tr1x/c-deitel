/*
Exerc�cio 02_19:
    Aritimetica, maior, menor. Escreva um programa que leia tr�s inteiros diferentes do teclado, depois apresente a soma, a m�dia, o produto, o menor e o maior desses n�meros. Use apenas
    a forma de sele��o unica instru��o if que voc� aprendeu neste capitulo.O dialogo na tela dever� aparecer da seguinte forma:
    -------------------------------------------------
    Digite tr�s inteiros diferenes: 13 27 14
    A soma � 54
    A media � 18
    O Produto � 4914
    O menor � 13
    O maior � 27

*/

#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL,"portuguese");
    int num1, num2, num3, soma, media, produto;

    printf("Escolha 1� n�mero inteiro:\n");
    scanf("%d", &num1);

    printf("Escolha 2� n�mero inteiro:\n");
    scanf("%d", &num2);

    printf("Escolha 3� n�mero inteiro:\n");
    scanf("%d", &num3);

    printf("num1 = %d | num2 = %d | num3 = %d\n", num1, num2, num3);

    soma = num1 + num2 + num3;
    printf("A SOMA � %d.\n", soma);

    media = (num1 + num2 + num3) / 3;
    printf("A M�DIA � %d.\n", media);

    produto = num1 * num2 * num3;
    printf("O PRODUTO � %d.\n", produto);

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

    printf("O MAIOR � %d\n", num3);

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

    printf("O MENOR � %d\n", num3);

    return 0;
}
