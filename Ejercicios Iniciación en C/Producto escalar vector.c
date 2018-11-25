#include <stdio.h>
#define N 100
int main(void)
{
	float v[N];
	float w[N];
	float prod_escalar;
	int dim, i,esc;
	
	printf ("\nIntroduce la dimension del vector:\t");
	scanf("%d",&dim);
	

	/*LECTURA PRIEMR VECTOR*/
		for(i=0; i<dim; i++)
		{
			printf("\nv[%d]: \t ",i);
			scanf("%f",&v[i]);
		}
	
	/*LECTURA SEGUNDO VECTOR*/
		for(i=0; i<dim; i++)
		{
			printf("\nw[%d]: \t ",i);
			scanf("%f",&w[i]);
		}
	
	
	/*PRODUCTO ESCALAR*/
	for(i=0, prod_escalar=0; i<dim;i++)
	{
		prod_escalar += v[i]*w[i];
		
	}
	
	printf("El resultado del produco escalar es %f \n",prod_escalar);
}
