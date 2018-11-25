#include <stdio.h>


int main(void)
{
	int i,j;
	
	
	int matriz[3][2];
	


 	
	//MOSTRAMOS LA MATRIZ
	
	for(i=0; i<3; i++)
	{
		for(j=0; j<2; j++)
		{
			matriz[i][j]=((i+1)+(j+1))*2-5;
			printf("%d\t ",matriz[i][j]);
			
		}
		printf("\n");
	}


}
