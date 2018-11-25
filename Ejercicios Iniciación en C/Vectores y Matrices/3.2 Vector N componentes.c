
#include <stdio.h>

void main(void)
{
   	 int i,dim;
   	 
   	 printf("Introduzca la dimension del vector: ");
   	 scanf("%i", &dim); 
	
	 float v[dim];
	 
	  
	/*Leemos vector*/

	
	for (i=0; i<dim; i++)
	{
		printf ("\nV[%d]?: ",i+1);
		scanf("%f",&v[i]);
	}	
	
	/*Mostramos vector*/
	
	for(i=0; i<dim;i++)
		printf ("\nV[%d]=%f", i+1,v[i]);
		
}
