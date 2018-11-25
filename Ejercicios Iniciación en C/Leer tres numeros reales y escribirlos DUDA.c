#include <stdio.h>

int main(void){
	
	int num, impar;
	
	printf ("introduzca un numero: ");
	scanf ("%d", &num);
	
	if (num%2==0)
	{
		impar=num-1;							
	}
	else 
	{
		impar=num;
		printf ("El numero es %i \n", impar);
	}
	
	printf ("Los numeros impares de %i son ",num);
	
	for (num=impar; impar>=0; impar=impar-2)
		printf ("%i, ", impar); //COMO PONER PARA QUE NO SE REPITAN LAS PALABRAS DENTRO DEL BUCLE Y TODOS LOS NUMEROS SALGAN ORDENADOS
	
	return (0);
	system ("pause");
	
	
}
