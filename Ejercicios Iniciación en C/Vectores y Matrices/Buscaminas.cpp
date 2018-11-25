#include <stdio.h>

int main (void)
{
	int i,j,N,M;
	//PEDIMOS DIMENSION MATRIZ
	
	printf("Con cuantas filas desea jugar? \n");
	scanf("%i",&N);
	
	printf("Con cuantas columnas desea jugar? \n");
	scanf("%i",&M);
	
	int M[N][M];
	//Rellenamos matriz 0
	
	for(i=0; i<filas; i++ )
		{
			for(j=0; j<columnas; j++)
			{
				M[i][j]=0;
			}
		}	
		
	//Mostramos matriz a 0 
	
	for(i=0; i<filas; i++ )
		{
			for(j=0; j<col; j++)
			{
				printf("%i", M[i][j]);
			}
		}	
		
	
}
