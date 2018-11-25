#include <stdio.h>

int main (void)
{
	int N,i;
	
	printf("Introduzca un numero: ");
	scanf("%i",&N);
	
	for(i=N; i<=N && i>=1; i=i-1)
		printf("El cuadrado de  %i es %i\n",i,i*i);
		
	return("0");
	
}
