#include <stdio.h>

int main(void)
{
	int i, x;
	
	printf("Inrtoduzca un numero: ");
	scanf ("%d", &x);
	
	if (x<=0)
	{
		printf ("El numero es negativo");
	}
	else 
	{
		if(x==1)
		{
				printf ("El numero es primo");
		}
		else
		{
			i=2;
			while(x%i!=0)
			{
				i++;
			}
			
				if(x==i)
				{
					printf ("El numero es primo");
				}
				else
				{
					printf ("El numero no es primo");
				}
			
		}
	}

	
	return 0;
	system("pause");
}
