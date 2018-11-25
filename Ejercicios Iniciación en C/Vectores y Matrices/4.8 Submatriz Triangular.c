#include <stdio.h>

int main(void)
{
	int i,j,N,M,tab;
	
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
	
		//Imprimimos la submatriz 
	
	printf("\n\nSubmatriz triangular superior Princial\n\n");
	for(i=0;i<N;i++)
	{
		
		for(j=0; j<M; j++)
		{
			if(j>i)
			{
				for(tab=1;tab<=1+i;tab++)
					{
						
					printf("\t");
					}
			printf("%d      ",matriz[i][j]);
					
		    }
			
		}
		printf("\n");
			
	    
			
 	}


}
