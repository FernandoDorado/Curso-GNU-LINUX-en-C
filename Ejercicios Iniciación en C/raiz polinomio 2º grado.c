#include <stdio.h>

int main(void)
{
	int w,y,t,x;
	printf ("Ingrese el coeficiente de segundo grado: \n");
	scanf("%i",&w);
	
	printf ("Ingrese el coeficiente de primer grado: \n");
	scanf("%i",&y);
	
	printf ("Ingrese el coeficiente independiente: \n");
	scanf("%i",&t);
	
	x=1;
	while(w*x*x+y*x+t!=0 && x<10000 )
	{
			x++;
	}
	if(x<10000){printf("La primera raiz es %d\n",x);}
	else{printf("No tiene raices sencillas\n");}
	
	x=x+1;
	while (w*x*x+y*x+t!=0 && x<10000)
	{		
		x++;	
	}
	if(x<10000){printf("La segunda raiz es %d\n",x);}
	

	
	system("pause");
	return 0;
}
