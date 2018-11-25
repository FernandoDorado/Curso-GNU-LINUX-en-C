#include <stdio.h>

int main(void)
{
	int matriz[8][8];
	int i,j,t,sp,lin,col,aux1,aux2,aux3,aux4,aux5,aux6,aux7,aux8,N;
	
	printf("Introduzca la dimension de la matriz cuadrada: ");
	scanf("%i",&N);
	
	//CREAMOS MATRIZ SOLO 1 Y 0 
	
	for(i=0; i<N; i++)
	{
		for(j=0; j<N; j++)
		{
			printf("\nElementos, solo 1 y 0\t [%d , %d]: ",i+1,j+1);
			scanf("%d",&matriz[i][j]);
			
			while(matriz[i][j]!=0 && matriz[i][j]!=1 && matriz[i][j]>1)
			{
			printf("\nElemento incorrecto, vuelva a introducir [%d , %d]: ",i+1,j+1);
			scanf("%d",&matriz[i][j]);	
			}
		}
	}
	
	//MOSTRAMOS MATRIZ INICIAL
	
	printf("\n\n MATRIZ INICIAL SIN TORRE\n\n");
	
	for(i=0; i<N; i++)
	{
		for(j=0; j<N; j++)
		{
			printf("%d\t",matriz[i][j]);
			
			
		}
		printf("\n");
	}
    //INTRODUCIMOS POSICION INICIAL DADA POR 69
	i=0;
	j=0;
	
 	printf("\n\n INTRODUCIMOS TORRE\n ");
 	
 	printf("\n\n FILA INICIAL  **POSICIONES COMIENZAN EN [0 0]\n");
	scanf("%d",&i);
	printf("\n\n COLUMNA INICIAL  \n");
	scanf("%d",&j);
	
	while(i>N && j>N)
		{
		printf("\nIntroduzca valores menores que 8\n");
		printf("\n\n POSICION OCUPADA, REPITE LA  fila desea introducir la torre? \t");
		scanf("%d",&i);
		printf("\n\n POSICION OCUPADA, REPITE LA  columna desea introducir la torre? \t");
		scanf("%d",&j);
		}
	
	t=69;
	matriz[i][j]=t;	
	
	lin=i;
	col=j;
	
	//EMPEZAMOS A JUGAR
	
	aux1=aux2=aux3=aux4=aux5=aux6=aux7=aux8=6969;
	
	while(i<N)
	{	
		
		if(matriz[i][j]==1)
		{
			sp=sp+1;
		aux1=i;
		aux2=j;
		
		i=10; //PONEMOS I=10 PARA QUE NO SE REPITA MAS EL BUCLE
		}
		i=i+1;
	}
	
	i=lin;
	j=col;
	
	
	
	while(i>=0)
	{	
		
		if(matriz[i][j]==1)
		{
			sp=sp+1;
			aux3=i;
			aux4=j;
			i=-2;
		}
		i=i-1;
	}
	
	i=lin;
	j=col;
	
	
	while(j<8)
	{
		if(matriz[i][j]==1)
		{
			sp=sp+1;
			aux5=i;
			aux6=j;
			j=10;
		}
		j=j+1;
	}
	
	i=lin;
	j=col;
	
	
	while(j>=0)
	{
		
		if(matriz[i][j]==1)
		{
			sp=sp+1;
			aux7=i;
			aux8=j;
			j=-2;
		}
		j=j-1;
	}
	
	i=lin;
	j=col;
	
	printf("\n\nLa torre tiene %d fichas a tiro\n\n",sp);
	printf("\n\nLas posiciones de los muertos son: [%d %d], [%d %d], [%d %d], [%d %d]\n\n\n",aux1,aux2,aux3,aux4,aux5,aux6,aux7,aux8);
	printf("\n NOTA:Estas posicones van desde 0 hasta 7, no de 1 a 8\n Si sale 6969 significa que no ha matado a nadie, podr�a simplificar\n �sto haciendo una comparacion con if, pero se alargar�a demasiado el codigo\n\n");
	
	
	
	










//MOSTRAMOS MATRIZ CON TORRE 
	
	for(i=0; i<N; i++)
	{
		for(j=0; j<N; j++)
		{
			printf("%d\t",matriz[i][j]);
			
			
		}
		printf("\n");
	}
	
}
