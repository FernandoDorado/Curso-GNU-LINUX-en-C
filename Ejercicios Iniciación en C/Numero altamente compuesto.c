#include <stdio.h>

int main (void)
{
	int i,j,cont,cont2,num,num2,salida;
	
	printf("Introduzca un numero: ");
	scanf("%d",&num);
	cont=0;
	cont2=0;
	
	for(i=1;i<=num;i++)
	{
		if(num%i==0) 
		{
			cont++;
		}
	}
	
	
	for(num2=1;num2<num;num2++)
	{
		
		for(j=1;j<=num2;j++)
		{
			if(num2%j==0)
			{
				cont2++;
			
			}
		}
		
		if(cont2>=cont)
		{
				printf("\nNUMERO NO ALTAMENTE COMPUESTO\n\n\n");
				salida=0;
				break;
				
		}
		cont2=0;
	}
	
	if(salida!=0) printf("\nNUMERO ALTAMENTE COMPUESTO\n\n\n");

	system("pause");
}
