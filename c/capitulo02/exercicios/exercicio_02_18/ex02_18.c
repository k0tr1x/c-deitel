/*
Exercicio 02-18
COMPARANDO INTEIROS. Escreva um programa que peça ao usuário que digite dois inteiros, obtenha os números e depois imprima o maior número seguindo das palavras, "é maior".
Se os números forem iguais, imprima a mensagem "Esses números são iguais". Use apenas a forma de seleção única da instrução if que você aprendeu nesse capitulo.
*/

#include<stdio.h>
#include<locale.h>

int main(){

setlocale(LC_ALL,"portuguese");
int num1, num2;

printf("Vamos ver qual é o maior número:\n");
printf("Primeiro Número:\n");
scanf("%d", &num1);
printf("Segundo Número:\n");
scanf("%d", &num2);

if(num1 == num2){
    printf("%d é igual ao %d .\n", num1, num2);
}

if(num1 > num2){
    printf("%d é maior que %d.\n", num1, num2);
}

if(num2 > num1){
    printf("%d é maior que %d.\n", num2, num1);
}

return 0;

}

