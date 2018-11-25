#include <stdio.h>
#define N 10
int main(void)
{
	int i;
	
	float v[N],aux,sp;
	sp=0;

	for (i=0; i<N; i++)
	{
		printf ("\nV[%d]?: ",i+1);
		scanf("%f",&v[i]);
		aux=v[i]*v[i];
		sp=sp+aux;
	}
	printf("El modulo al cuadrado de los vectores es: %f",sp);
}
