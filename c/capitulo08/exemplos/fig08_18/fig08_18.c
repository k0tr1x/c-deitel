// figura 08_18: fig08_18.c
// Usando strcmp e strncmp
#include<stdio.h>
#include<string.h>

int main(void){

    const char *s1 = "Happy New Year"; // Inicializando um char pointer
    const char *s2 = "Happy New Year"; // Inicializando um char pointer
    const char *s3 = "Happy Holidays"; // inicializando um char pointer

    printf("%s%s\n%s%s\n%s%s\n\n%s%2d\n%s%2d\n%s%2d\n\n",
        "s1 = ",s1, ",s2 = ", s2, ",s3 = ", s3,
        "strcmp(s1, s2) = ", strcmp(s1, s2),
        "strcmp(s1, s3) = ", strcmp(s1, s3),
        "strcmp(s3, s1) = ", strcmp(s3, s1));

    // Concatena os 6 primeiros digitos de s3 com s1
    printf("%s%2d\n%s%2d\n%s%2d\n",
        "strncmp(s1, s3, 6) = ", strncmp(s1, s3, 6),
        "strncmp(s1, s3, 7) = ", strncmp(s1, s3, 7),
        "strncmp(s3, s1, 7) = ", strncmp(s3, s1, 7));

}
