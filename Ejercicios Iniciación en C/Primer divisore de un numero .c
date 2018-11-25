#include <stdio.h>
int main(void){
	
	int n,k;
	
	printf("Introduzca un numero: ");
	scanf ("%d", &n);
	k=2;
	while(n%k!=0){
	
		k++;}
		
	printf ("El divisor es %d", k);
	
	}
