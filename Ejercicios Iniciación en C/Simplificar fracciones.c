#include <stdio.h>

int main (void)
{
	int num,den,i,aux,aux2;
	
	printf("Introduzca el numerador de su fraccion: ");
	scanf("%d",&num);
	
	printf("\n\nIntroduzca el denominador de su fraccion: ");
	scanf("%d",&den);
	aux=num;
	aux2=den;
	
	for(i=1;i<=num || i<=den;i++)
	{
		if(num%i==0 && den%i==0)
		{
			num=num/i;
			den=den/i;
			i=1;
		}
		
		
	}
	if(num==aux && den==aux2)
	{
		printf("\n\nSu fraccion no se puede simplificar\n\n");
	}
	else 
	{
	printf("\n\nSu fraccion simplificada es %d/%d\n\n",num,den);
    }
	system("pause");
}
