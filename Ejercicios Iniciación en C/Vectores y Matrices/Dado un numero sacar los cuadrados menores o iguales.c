#include <stdio.h>
#define M 2
#define N 3

int main(void)
{
	float A[M][N]={0.2,0.6,0.2,0.5,0.2,0.3};
	float sp;
	int i,j,esto=1;
	
	for(i=0; i<M  && esto; i++)
	{
		for(j=0, sp=0; j<N;j++)
		{
			sp+=A[i][j];
		
		}
		if(sp!=1) esto=0;
	}
	
	if(esto)
	printf("\nLa matriz ES estocastica\n");
	else 
	printf("\nLa matriz NO es estocastica\n");
	
	system ("pause");
	return 0;

	
}
	
	


