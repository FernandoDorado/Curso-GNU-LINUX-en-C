#include <stdio.h>

int main (void)
{
	int x,h,max,min;
	max=0;
	
	printf("Introduzca una altura: ");
	scanf("%i",&x);
	min=x;
	h=x;
	while(h>0)
	{
		if(h>max)
		{
			max=h;
		}
		else
		{
			if(h<min)
			{
				min=h;
			}
			
		}
	printf("Introduzca una altura: ");
	scanf("%i",&h);
	}
	
	printf("El max es %i y el min es %i",max,min);
}
