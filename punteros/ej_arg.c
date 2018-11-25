/* Ejemplo de interpretacion de argumentos */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
   int reves = 0;
   int inic = 0;
   int fin = 5;
   int i;

   printf("mi primer arg. es %s\n", argv[0]);

   for(i=1; i<argc; i++)
   {
     if(!strcmp("-r", argv[i])) reves = 1;
     if(!strcmp("-inic", argv[i]) && i<argc-1)
     {
       if(sscanf(argv[i+1], "%d", &inic))
       {
         i++;
       }
       else printf("no puedo leer numero inicial\n");
     }

     if(!strcmp("-fin", argv[i]) && i<argc-1)
     {
       if(sscanf(argv[i+1], "%d", &fin))
       {
         i++;
       }
       else printf("no puedo leer numero final\n");
     }

   }

   if(!reves)
   {
     for(i=inic; i<=fin; i++)
      printf("%d\n", i);
   }
   else
   {
     for(i=fin; i>=inic; i--)
      printf("%d\n", i);
   }

   return 0;
}
