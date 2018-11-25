#include <stdio.h>
int main(void)
{
	int n,k;
	
	printf("Introduzca un numero: ");
	scanf ("%d", &n);
	printf (" Los divisores son: ");
	
	for(k=1; k<=n; k++)
	{
		
		if(n%k==0)
			{
				printf ("%d,",k);
				
			}
	}

}
