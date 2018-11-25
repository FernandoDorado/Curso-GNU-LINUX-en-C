#include <stdio.h>
#define N 100
main(void)
{
	int x,v[N],n,i;
	
	printf("Cuantas componentes quiere su vector? ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("\n\nIntroduzca la componente v[%d]  ",i+1);
		scanf("%d",&v[i]);
	}
	
	printf("\n\nIndique el divisor: ");
	scanf("%d",&x);
	
	for(i=0;i<n;i++)
	{
		if(v[i]%x==0) 
		{
		v[i]=x;
		}
	}
	
	for(i=0;i<n;i++)
	{
		printf("v[%d]=%d\t",i+1,v[i]);
	}
	
	system("pause");
}
