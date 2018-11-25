#include <stdio.h>

int main(void)
{
	int x,y,res,n,i;
	
	printf("Introduce un número de términos para la serie de Fibonacci: ");
	scanf ("%i", &n);
	x=0;
	y=1;
	i=3;	
	
	if (n==1)
	{
		printf("0 ");
		
	}
	else 
	{
		printf("0, 1, ");
	}
	while(i<=n)
	{ // 0 1 1 2 3 5
			res=x+y;
			printf("%i, ",res);	
			x=y;
			y=res;
			i++;
	
	}
	printf("\n");
	
	return (0);
	system ("pause");
	
}
