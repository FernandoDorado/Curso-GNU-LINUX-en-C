#include <stdio.h>

main(void) 
{ 
float y=0; 
int n; 
int i;  
printf("Introduzca el valor de n "); 
scanf("%d",&n); 
/**************************/  
if(n>0)
{
	for(i=i-1;i<n;i++)
	{
		y=1.0/i;
	}
}        
/**************************/ 
printf("\n Y= %f",y); 
getch(); 
}
