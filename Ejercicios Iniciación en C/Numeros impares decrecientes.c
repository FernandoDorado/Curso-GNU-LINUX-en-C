#include <stdio.h>

int main (void)
{
	int x,i;
	
	printf("Introduzca un numero: ");
	scanf("%i",&x);
	
	printf("Los numeros impares menores de  %i son\t",x);
	i=x;
	
	if(i%2==0)
	{
		i=i-1;
	}

	while(i%2!=0 && i>=1)
	{
		printf ("%i ",i);
		i=i-1;
		 	if(i%2==0)
			{
		i=i-1;
			}
	}

		
     return("0");
	
}
