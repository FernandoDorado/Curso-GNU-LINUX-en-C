#include <stdio.h>
#define N 4

int main(void)
{
int i,j,cont;
int M[N*N];

/*PONEMOS MATRIZ A CERO*/

for(i=0; i<N; i++)
{
	for(j=0; j<N ;j++)
	{
			M[i*N+j]=0;
	}
	
}

/*CREAMOS MATRIZ*/

for(cont=1, i=0; i<N; i++)
{
	for(j=0; j<=i; j++)
	{
		M[i*N+j]=cont;
		cont++; 
	}
}
/*PRESENTAMOS RESULTADO*/
for(cont=1,i=0; i<N; i++)
{
	printf("\n");
	for (j=0; j<N; j++)
		{
			printf("%d\t", M[i*N+j]);
		}
}




}
