/*
Exercicio 02-18
COMPARANDO INTEIROS. Escreva um programa que pe�a ao usu�rio que digite dois inteiros, obtenha os n�meros e depois imprima o maior n�mero seguindo das palavras, "� maior".
Se os n�meros forem iguais, imprima a mensagem "Esses n�meros s�o iguais". Use apenas a forma de sele��o �nica da instru��o if que voc� aprendeu nesse capitulo.
*/

#include<stdio.h>
#include<locale.h>

int main(){

setlocale(LC_ALL,"portuguese");
int num1, num2;

printf("Vamos ver qual � o maior n�mero:\n");
printf("Primeiro N�mero:\n");
scanf("%d", &num1);
printf("Segundo N�mero:\n");
scanf("%d", &num2);

if(num1 == num2){
    printf("%d � igual ao %d .\n", num1, num2);
}

if(num1 > num2){
    printf("%d � maior que %d.\n", num1, num2);
}

if(num2 > num1){
    printf("%d � maior que %d.\n", num2, num1);
}

return 0;

}

