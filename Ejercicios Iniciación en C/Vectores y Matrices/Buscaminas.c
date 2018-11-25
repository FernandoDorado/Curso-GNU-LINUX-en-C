#include <stdio.h>
#include <stdlib.h>
#include <time.h>   // libreria para el uso de time()

int main (void)
{
	int i,j,N,M,bomb;
	int fila,columna,cantidad,contador,fil,col,disx,disy,dist; //PARA NUM ALEATORIO
    int hora = time(NULL); //PARA NUM ALEATORIO
    
	//PEDIMOS DIMENSION MATRIZ
	
	printf("Con cuantas filas desea jugar?  ");
	scanf("%i",&N);
	
	printf("\nCon cuantas columnas desea jugar?  ");
	scanf("%i",&M);
	
	int Matriz[N][M];
	
	//Rellenamos matriz 0
	
	for(i=0; i<N; i++ )
		{
			for(j=0; j<M; j++)
			{
				Matriz[i][j]=0;
			}
		}	
		
	 
		
	//INTRODUCIMOS BOMBA POSICON AL AZAR	
	  
	srand (time (NULL)); /* ?-- */ 
	fila=rand() % N; 
//	printf("%i\n",fila+1); 
	columna=rand() % M; 
//	printf("%i\n",columna+1);     //POR TANTO LA BOMBA ESTARIA EN M[FILA][COLUMNA]
	
	
	//Mostramos matriz a 0 
	printf("\n\n");
	
	for(i=0;i<N;i++)
		{
			for(j=0; j<M; j++)
			{
				printf("%d\t", Matriz[i][j]);
			}
			printf("\n");
		}  
	
	//BUSCAMOS DISTANCIA HASTA BOMBA
	
	printf("\n\n Que comienze el juego \n\n");
	
	contador=0;
	dist=1;
	while(dist>0){
	
	
	printf("Introduzca la fila donde esta la bomba ");
	scanf("%d",&fil);
	printf("Introduzca la columna donde esta la bomba ");
	scanf("%d",&col);
	printf("\n\n");
	fil=fil-1;
	col=col-1;
	
	disx=fil-fila;
	disy=col-columna;
	if(disx<0) disx=-disx;
	if(disy<0) disy=-disy;
	dist=disx+disy;
	contador++;
	
	if(dist==0) break;
	
	Matriz[fil][col]=dist;
	
	for(i=0;i<N;i++)
	{
		for(j=0; j<M;j++)
		{
			printf("%d\t",Matriz[i][j]);
		}
		printf("\n");
	}
	
	printf("\n\n\n");
	}
	
    printf("\n\n\nGANASTES\n\n\nNumero de intentos: %i\n\n",contador);
    
    system ("pause");
    
		

}
