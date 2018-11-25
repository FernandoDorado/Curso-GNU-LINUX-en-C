#include <stdio.h>
#define N 5
void main(void)
{
	 float v[N];
	 int i;
	  
	/*Leemos vector*/
	
	for (i=0; i<N; i++)
	{
		printf ("\nV[%d]?: ",i+1);
		scanf("%f",&v[i]);
	}	
	
	/*Mostramos vector*/
	
	for(i=4; i<N && i>=0 ;i=i-1)
		printf ("\nV[%d]=%f", i+1,v[i]);
		
}
