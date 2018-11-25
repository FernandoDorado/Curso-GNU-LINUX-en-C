#include <stdio.h>

int main(void)
{
	int max, x;
	
	max=0;
//Para salir de la serie introducir el valor 0
	printf("          //Para salir de la serie introduzca el valor 0\n");
//Tambien se puede hacer indicando el numero de terminos que vamos a introducir

	printf("Introduzca un numero: ");
	scanf("%i",&x);
	
	while(x!=0)
	{
		if(x>max)
		{
			max=x;
		}
		
	printf("Introduzca un numero: ");
	scanf("%i",&x);
	}
	
		printf("El maximo es:%i ", max);
	
	return 0;
	system("pause");
}
