#include <stdio.h>
#define N 1000

int main (void)
{
	int num,dim,aux1,aux2,errors2,errort,errorp2,s2,i,j,gnum1,gnum2,sprueba,pprueba,salida;
	salida=1;
	int v[N];
	errort=500; ///añado un error alto para ir compararando y actualizando respecto a este
	printf("Introduzca al numero que desea aproximar: ");
	scanf("%d",&num);
	
	printf("\nCon cuantos numeros desea hacer la aproximacion?: ");
	scanf("%d",&dim);
	printf("\n\n\n");
	for(i=0;i<dim;i++)
	{
		printf("\nIntroduzca el numero para realizar aproximacion: ");
		scanf("%d",&v[i]);
	}
	
	for(i=0;i<dim;i++)
	{
		for(j=0;j<dim;j++)
		{
			if(j!=i)
			{
				aux1=v[i]+v[j];
				errors2=num-aux1;
				if(errors2<0){errors2=-errors2;}
				if(errors2<errort) {errort=errors2; gnum1=v[i];gnum2=v[j];}
				//printf("%d\t",errors2);
				if(errors2==0) 
					{
						printf("\n\nLa mejor aproximacion es la suma de %d+%d=%d con un error de 0\n\n",v[i],v[j],num);
						salida=0;
						break;
					}
				
			}
		}
		if(errors2==0) break;
	}
	
	sprueba=errort;
	
	for(i=0;i<dim;i++)
	{
		for(j=0;j<dim;j++)
		{
			if(j!=i)
			{
				aux2=v[i]*v[j];
				errorp2=num-aux2;
				if(errorp2<0) errorp2=-errorp2;
				if(errorp2<errort) 	{errort=errorp2;gnum1=v[i];	gnum2=v[j];}
				if(errorp2==0)
				{
					printf("\n\nLa mejor aproximacion es el producto de %dx%d=%d con un error de 0",v[i],v[j],num);
					salida=0;
					break;
				}
			}
		}
	if(errorp2==0) break;
	}
	pprueba=errort;
	
	//printf("\n\n ERROR SUMA %d",sprueba);
	//printf("\n\n ERROR PRODUCTO %d",pprueba);
	if(sprueba==pprueba && salida!=0) printf("\n\nLa mejor aparoximacion es la suma de %d+%d=%d con un error de %d",gnum1,gnum2,gnum1+gnum2,errort);
	else
	{
	if(sprueba<pprueba && salida!=0) {printf("\n\nLa mejor aparoximacion es la suma de %d+%d=%d con un error de %d",gnum1,gnum2,gnum1+gnum2,errort);}
	if(pprueba<sprueba && salida!=0) {printf("\n\nLa mejor aprooximacion es el producto de %d*%d=%d con un error de %d",gnum1,gnum2,gnum1*gnum2,errort);}
	}
}

