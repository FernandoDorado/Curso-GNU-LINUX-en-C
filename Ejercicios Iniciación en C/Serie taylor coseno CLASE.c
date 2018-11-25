#include <stdio.h>
#define N 10
#include <math.h> //Libreria matematica
int main ()
{
	float  s=0;
	int k,signo,j;
	float x,num;
	int den;
	
	printf ("Introduzca x: ");
	scanf ("%f", &x);

	for(k=0, signo=1; k<N; k++ , signo= - signo)
	{
		num=1;
		den=1;
			for(j=0;j<2*k;j++)
				{
					num= num*x; //Para calcular x^(2*k)
					den= den*(j+1); //Para calcular (2*k)
				}
		s=s + signo*num/den; 
	}
	
	printf ("Cos(%f)= %f\n", x,s);
	printf ("Coseno exacto = %f\n", cos(x));
}
