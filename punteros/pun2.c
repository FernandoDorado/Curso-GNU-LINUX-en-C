
#include <stdio.h>
int main()
{	
     int a = 10, *p;           							/* "a" como Entero y "p" como puntero */
     p = &a;           								    /* Asigna la dirección de "a" a "p" */
     printf("\nEl valor de A : %d", a);           		/* Contenido de "a" */
     printf("\nLa dirección de A : 0x%x", &a);          /* Dirección de "a" */
     printf("\nEl valor de P : 0x%x", p);         		/* Contenido de "p" */
     printf("\nLa dirección de P : 0x%x", &p);          /* Dirección de "p" */
     printf("\nEl contenido de P es : %d\n", *p);         /* Puntero de &a */
     return 0;
}
