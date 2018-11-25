#include <stdio.h>	

int main(void)
{
	int x, cont, suma,media,terminos;
	
	printf("Introduce el numero de terminos de su serie numerica: ");
	scanf("%d", &terminos);
	
	cont=1;
	suma=0;
	
	while(cont<=terminos)
	{	
			printf("Introduce un numero: ");
			scanf("%d", &x);
			suma=suma+x;
			cont=cont+1;
	}
	
	media=suma/terminos;
	printf("La media es %d", media);	
	
	system("pause");
	return 0;	
}
