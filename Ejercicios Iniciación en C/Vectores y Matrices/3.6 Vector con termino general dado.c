#include <stdio.h>
void main(void)
{
   	 int i,N;
   	 
   	 printf("Introduzca la dimension del vector: ");
   	 scanf("%i", &N); 
	
	 float v[N];
	 
	  
	/*Leemos vector*/

	
	for (i=0; i<N; i++)
	{
			v[i]=(i+1)*(i+1)-3;
	}	
	
	/*Mostramos vector*/
	
	for(i=0; i<N;i++)
		printf ("\nV[%d]=%f", i+1,v[i]);
		
}
