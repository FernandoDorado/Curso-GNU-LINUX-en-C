
#include <stdio.h>

int main (void){
	
	int n,k;
	printf("Introduzca un numero: ");
	scanf("%i", &n);
	
	for (k=n; k>=0 ; k--)						//Orden descendente k--, si fuera ascendente seria k++
	printf ("El cuadrado de el numero %d es %d \n", k,k*k);

	
	
}
