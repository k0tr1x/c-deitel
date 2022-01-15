// Figura 08_20: fig08_20.c
// Usando   strchr

#include<stdio.h>
#include<string.h>

int main(void){

    const char *string = "This is a test"; // inicializando um ponteiro
    char character1 = 'a';
    char character2 = 'z';

    // se o caractere um encontrar uma string
    if(strchr(string, character1) !=NULL){
        printf("/'%c\' was found in \"%s\".\n",
        character1, string);
    } // fim do if
    else{ // caracter not found
        printf("/'%c\' was not found in \"%s\".\n",
        character1, string);
    } // fim do else

        // se o caractere um encontrar uma string
    if(strchr(string, character2) !=NULL){
        printf("/'%c\' was found in \"%s\".\n",
        character2, string);
    } // fim do if
    else{ // caracter not found
        printf("/'%c\' was not found in \"%s\".\n",
        character2, string);
    } // fim do else

}

