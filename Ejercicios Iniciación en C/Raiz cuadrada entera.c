#include <stdio.h>

int main(void)
{
	int num, x;
	
	printf ("Introduzca un numero: ");
	scanf ("%d", &num);
	x=0;
	while (x*x<num)
	{
		x++;
	}
	printf ("La raiz es de %d es: %d", num,x);
	
	return 0;
	system("pause");
}
