#include <stdio.h>

int main(void)
{
	int i,j;
	float M[2][2],b,b2,auxc,auxac,auxra,raiz,k,ec1,ec2;
	raiz=0;
	
	//Leer matriz
	printf("Introduzca la matriz: \n\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("M[%d][%d]= ",i+1,j+1);
			scanf("%f",&M[i][j]);
		}
	}
	
	//Mostrar matriz sin autovalores
	printf("\n\nMostramos matriz con los autovalores\n\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			if(i==j)
			{
				printf("%.3f-X\t",M[i][j]);
			}
			else printf("%.3f\t",M[i][j]);	
		}
		printf("\n");
	}
	
	//CALCULAMOS AUTOVALORES 
	
	printf("\n\nLas ecuaciones a resolver serian (%.3f-X)x(%.3f-X)-%.3fx%.3f=0\n\n",M[0][0],M[1][1],M[1][0],M[0][1]);
	
	//Ponemos ecuacion segundo grado:
	
	//Calculamos raiz de b^2-4ac
	
	 b=M[0][0]*M[1][1];
	 b2=b*b;
	 /*4ac*/ 
	 auxc=M[1][1]-M[1][0]*M[0][1];
	 auxac=4*1*auxc;
	 auxra=b2-auxac;
	 if(auxra<0) printf("\nLa solucion es compleja");
	 else
	 {
	 	//Calculamos la raiz
	 	for(k=1; k<auxra;k=k+0.001)
	 	{
	 		if(k*k==auxra) raiz=k;
	 	}
	 	if(raiz==0) printf("\n\nLa raiz es decimal y no podemos calcularla ");
	 }
	 
	 ec1=-b+raiz;
	 ec1=ec1/2;
	 ec2=-b-raiz;
	 ec2=ec2/2;
	 printf("\n\n Los autovectores serian: %.3f%.3f",ec1,ec2);
}
