#include <stdio.h>

int main(void)
{
	int k,n,N,pot;
	float sp;
	
	printf("Deme un numero: ");
	scanf ("%d", &N);
	
	for(sp=0,n=1 ; n<=N; n++)
	{
		for(k=1, pot=1; k<=n; k++)
		{
			pot=2*pot;
		}
	sp=sp+1.0/pot; //sp=1/(float)pot;
	}
	
	printf( "\n la suma con %d terminos vale %f", N,sp);
}
