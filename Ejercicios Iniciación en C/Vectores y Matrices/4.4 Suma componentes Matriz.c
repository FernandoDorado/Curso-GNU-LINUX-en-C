#include <stdio.h>


int main(void)
{
	int i,j,N,M,sp;
	
		printf("Ingrese el numero de filas: ");
	scanf("%i",&N);
	
	printf("Ingrese el numero de columnas: ");
	scanf("%i",&M);
	
	int matriz[N][M];
	sp=0;

	
	//LEEMOS LA MATRIZ
	
	for(i=0; i<N; i++)
	{
		for(j=0; j<M; j++)
		{
			printf("\nElemento [%d , %d]: ",i+1,j+1);
			scanf("%d",&matriz[i][j]);
			sp=sp+matriz[i][j];
		}
	}
 	
 	printf ("\n\n Elementos almacenados en la tabla: \n\n");
 	
	//MOSTRAMOS LA MATRIZ
	

		
			printf("La suma de las componentes de la matriz es %d ",sp);
			


}
