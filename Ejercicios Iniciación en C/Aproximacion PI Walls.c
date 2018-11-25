#include <stdio.h>
#define N 1000000

int main (){
	int k;
	float p;
	
	for(k=1, p=1 ; k<N/2 ; k++)
	{	
		p=p*(2*k)/(2*k-1)*(2*k)/(2*k+1);
		
	}
		
		
		printf ("La aproximacion de pi con %d terminos es \n%f\n", N,2*p);
}
