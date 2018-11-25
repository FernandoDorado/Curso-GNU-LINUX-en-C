#include <stdio.h>
#define N 50
/*ACORDARNOS QUE TODOS LOS DIGITOS NUMEROS SON ASCII Y QUE EL 
VALOR DEL CARACTER ASCII "0" ES 48, ENTONCES

   PASAR DE CARACTER A NUM : int n= int(c-48)
   PASAR DE NUM A CARACTER : char c=(char)(n+48)*/
int main (void)
{
	char c, palabra[50];
    int i;
    printf("Teclee una palabra de menos de 50 letras:\n");
    scanf("%s", palabra);   //%c para caracter aislado %s para cadenas de caracteres
    i = 0;
    while(palabra[i++] != 46) //46 equivale al punto en ascii
      ;
    printf("%s tiene %d letras.\n", palabra, i-1);
    printf("%s escrita al reves es: ", palabra);
    while (i >= 0)
        printf("%c", palabra[i--]);

}

