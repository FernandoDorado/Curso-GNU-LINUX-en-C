#include <stdio.h>
#define N 60
void main(void)
{
   	 int i,dim,z,k;
   	 float max, min;
   	 float v[N];
   	 
   	 printf("Introduzca la dimension del vector: ");
   	 scanf("%i", &dim);
	 
	 
	 i=0;
	 printf ("\nV[%d]?: ",i+1);
     scanf("%f",&v[i]);
	 z=1;
	 max=min=v[i];
	 
	 
	/*Leemos vector*/
	i=1;
	for (i=1; i<dim; i++)
	{
		printf ("\nV[%d]?: ",i+1);
		scanf("%f",&v[i]);
			
			if(v[i]>=max)
			{
				max=v[i];
				k=i+1;
					
			}
			
			if(v[i]<=min)
				{
					min=v[i];
					z=i+1;
				}
				
				
				
			
	}	
	
	/*Mostramos vector*/  
	
	printf ("v[max]: v[%i]=%f",k,max);
	printf ("\nv[min]: v[%i]=%f",z,min);
}
