#include <stdio.h>
#define N 20     //ETIQUETA PARA CAMBIAR TODOS LOS VARIABLES

void main(void)
{
	int v[N];
	int i;
	/*Rellenamos vector*/
	for(i=0;i<N; i++) 
		v[i]=i*i;
	/*Mostroamos vector*/
	for(i=0;i<N; i++) 
		printf("\n[%d]=%d",i,v[i]);
		

}
