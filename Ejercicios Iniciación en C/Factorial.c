#include <stdio.h>

int main(void){
	int k,N;
	float fact;
	
	printf("Dame un numero: ");
	scanf("%d", &N);
	fact=1;
	
	for (k=1;k<=N; k=k*(k+1))
	{
		fact=fact+k;
	}
	printf( "FACTORIAL ES %f",fact);
}
