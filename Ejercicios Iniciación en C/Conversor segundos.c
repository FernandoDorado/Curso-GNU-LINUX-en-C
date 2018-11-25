
#include <stdio.h>  
 
int main(){  
    int num,dias,hor,minu,seg;  
    printf("ingrese los segundos\n");  
    scanf("%d",&num);
	dias=(num/86400);
    hor=((num-dias*86400)/3600);  
    minu=((num - (hor*3600+dias*86400)) / 60);  
    seg=num-(dias*86400+hor*3600+minu*60);  
    printf("%ddias %dh %dm %ds" ,dias,hor,minu,seg);  
  return 0;  
} 



