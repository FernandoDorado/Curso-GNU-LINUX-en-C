/* fichero secreto.c */
/* Este programa encripta un texto */
#include <stdio.h>
void main(void)
{
    char ch;
    int n;
    n=1;
    getchar();
    printf("Introduzca los caracteres.\n");
    printf("Pulse ^Z para finalizar:\n");
    while((ch = getchar()) != EOF)
        if (ch == '\n')
            printf("%c", ch);
        else
            printf("%c", ch+n);
}

