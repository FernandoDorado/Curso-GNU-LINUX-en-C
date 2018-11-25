#include <stdio.h>

int main (void)
{
	int h,x,sp,i;
	
	printf("Introduzca un valor para la altura: ",x);
	scanf("%i",&x);
	h=x;
	sp=0;
	i=0;
	while(h>0)
	{
		i++;
		sp=sp+h;
		printf("Introduzca un valor para la altura: ",h);
		scanf("%i",&h);
	}
	
	printf ("Media de las alturas: %i",sp/i);
}
