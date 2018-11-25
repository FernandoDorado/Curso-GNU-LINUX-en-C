#include <stdio.h> 
#define N 1000010

int main (void)
{
	int i,j,div,k;
	div=0;
	printf("v[1]=1\n");
	k=1;

	
	for(i=1;i<N;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(i%j==0) div=div+1;
		}
		
		if(div==2)
		{			
					k=k+1;
					printf("v[%d]=%d\n",k,i);
		}
		div=0;
	}
    
	
}
