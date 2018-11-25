#include <stdio.h>


int main(void)
{
	int i,j,N,M,z,n,p,k;
	
		printf("Ingrese el numero de filas de la matriz 1: ");
	scanf("%i",&N);
	
	printf("Ingrese el numero de columnas de la matriz 1: ");
	scanf("%i",&M);
	
	printf("\n\nIngrese el numero de filas de la matriz 2: ");
	scanf("%i",&n);
	
	printf("Ingrese el numero de columnas de la matriz 2: ");
	scanf("%i",&p);
	
	if(M!=n)
	{
		printf("\n\n\n\nNo se puede realizar la multiplicacion: Math Error 404 Not Found");
	}
	else
	{
	
	
	int matriz[N][M], matriz2[n][p],Producto[N][p];
	

	
	//LEEMOS LA MATRIZ
	printf ("\n\n LEEMOS LA MATRIZ 1 \n\n");
	for(i=0; i<N; i++)
	{
		for(j=0; j<M; j++)
		{
			printf("\nElemento [%d , %d]: ",i+1,j+1);
			scanf("%d",&matriz[i][j]);
		}
	}
 	

 	
 	//LEEMOS LA MATRIZ 2
	
	printf ("\n\n LEEMOS LA MATRIZ 2 \n\n");
		
	for(z=0; z<n; z++)
	{
		for(k=0; k<p; k++)
		{
			printf("\nElemento [%d , %d]: ",z+1,k+1);
			scanf("%d",&matriz2[z][k]);
		}
	}
 	
	//MOSTRAMOS LA MATRIZ
	printf ("\n\n MOSTRAMOS LA MATRIZ 1: \n\n");
	for(i=0; i<N; i++)
	{
		for(j=0; j<M; j++)
		{
			printf("%d\t ",matriz[i][j]);
			
		}
		printf("\n");
	}
	
	//MOSTRAMOS LA MATRIZ 2 
	printf ("\n\n MOSTRAMOS LA MATRIZ 2: \n\n");
	for(z=0; z<n; z++)
	{
		for(k=0; k<p; k++)
		{
			printf("%d\t ",matriz2[z][k]);
			
		}
		printf("\n");
	}
	
	
	//CALCULAMOS MULTIPLICACION
		
		for(i=0;i<N;i++)
		{
			for(j=0; j<p;j++)
			{
				Producto[i][j]=0;
				for(k=0;k<M;k++)
				{
					Producto[i][j]=(Producto[i][j]+(matriz[i][k]*matriz2[k][j]));
				}				
			}
		}
		
		
	//IMPRIMIMOS MULTIPLICACION
	
		
	printf("\n\nLa multiplicacion vale:\n\n");
		for(i=0;i<N;i++)
		{
			for(j=0; j<p ;j++)
			{
					printf("%d\t",Producto[i][j]);
			
			}
		printf("\n");
		}
		
	
	}


}
