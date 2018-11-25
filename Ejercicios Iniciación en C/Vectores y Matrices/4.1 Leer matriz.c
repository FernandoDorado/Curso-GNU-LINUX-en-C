#include <stdio.h>


int main(void)
{
	int i,j,N,M;
	
		printf("Ingrese el numero de filas: ");
	scanf("%i",&N);
	
	printf("Ingrese el numero de columnas: ");
	scanf("%i",&M);
	
	int matriz[N][M];
	

	
	//LEEMOS LA MATRIZ
	
	for(i=0; i<N; i++)
	{
		for(j=0; j<M; j++)
		{
			printf("\nElemento [%d , %d]: ",i+1,j+1);
			scanf("%d",&matriz[i][j]);
		}
	}
 	
 	printf ("\n\n Elementos almacenados en la tabla: \n\n");
 	
	//MOSTRAMOS LA MATRIZ
	
	for(i=0; i<N; i++)
	{
		for(j=0; j<M; j++)
		{
			printf("%d\t ",matriz[i][j]);
			
		}
		printf("\n");
	}


}
