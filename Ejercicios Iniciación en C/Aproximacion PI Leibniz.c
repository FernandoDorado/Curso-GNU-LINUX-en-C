//Serie de leibniz para PI

#include <stdio.h>
#define N 1000 //Podemos declarar aqui el numero de terminos, va sin ; y es lo mismo que int N=10; NO ES UNA VARIABLE, ES UN VALOR CTE.

int main (void ){
	float s=0;
	int signo,k;
	signo=1;
	//	int N=10; //Numero de terminos
	
	for(k=0; k<N ; k++, signo = - signo)
	{
		s=s+1.0/(2*k+1)*signo;				//Ponemos 1.0 para que sea flotante y haga una division con deciales al ser k un numero entero
		//  signo = - signo; Se puede declarar aqui o en el for	
		
		
		
	}

	printf ("Aproximacion de pi con %d terminos \n%f\n  ", N, 4*s);
}
