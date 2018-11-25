
#include <stdio.h>
#define N 40
void main(void)
{
	 int v[N];
	 int i,j,dim;
	 int aux;
	 
	/*Leemos vector*/
	printf("\nDimension vector?:");
	scanf("%d", &dim);
	
	for (i=0; i<dim; i++)
	{
		printf ("\nV[%d]?: ",i+1);
		scanf("%d",&v[i]);
	}
	/*Ordenamos vector*/
	for (i=0; i<dim-1; i++)
	
		for(j=i+1; j<dim;j++)
		
				if(v[j]<v[i])
				{
					aux=v[j];
					v[j]=v[i];
					v[i]=aux;
					
					
					
				}
			
	/*Mostramos vector*/
		printf("Vector ordenado");
	for(i=0; i<dim;i++)
		printf ("\nV[%d]=%d", i+1,v[i]);
	
}
