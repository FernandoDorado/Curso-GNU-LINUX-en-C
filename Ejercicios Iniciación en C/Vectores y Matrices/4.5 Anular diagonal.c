#include <stdio.h>


int main(void)
{
	int i,j,N,M,tab;
	
		printf("Ingrese el numero de filas: ");
	scanf("%i",&N);
	
	printf("Ingrese el numero de columnas: ");
	scanf("%i",&M);
	
	int matriz[N][M];
	
	for(i=0; i<N; i++)
	{
		for(j=0; j<M; j++)
		{
			printf("\nElemento [%d , %d]: ",i+1,j+1);
			scanf("%d",&matriz[i][j]);
		}
	}
 	

	//Mostramos la matriz
	
	for(i=0; i<N; i++)
	{
		for(j=0; j<M; j++)
		{
			printf("%d\t ",matriz[i][j]);
			
		}
		printf("\n");
		
	}
	//Imprimimos la diagonal 
	
	printf("\n\nDiagonal Princial\n\n");
	for(i=0;i<N;i++)
	{
		printf("%d\n",matriz[i][i]);
		
			for(tab=1;tab<=i+1;tab++)
			{
			printf("\t");
			}
			
	}
	
	//Hacemos nulos elementos diagonal 
	printf("\n\nDiagonal Princial NULA \n\n");
	
	for(i=0; i<N; i++)
	{
		for(j=0; j<M; j++)
		{
			if(i==j)
			{
				matriz[i][j]=0;
			}
			
			
			printf("%d\t ",matriz[i][j]);
			
			
		}
		printf("\n");
		
	}
	


}
