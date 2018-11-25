#include <stdio.h> 
#define N 100 
void main(void) 
{  
int i, j, k, l, tamfiltro;
int A[N],[N];  
int B[N],[N];    
// Lectura de la matriz A e inicialización a cero de la matriz B  
for(i=0;i<N;i++)       
for(j=0;j<N;j++)     
{   
	scanf(“%d”, &A[i][j]);   
	B[i][j]=0;     
}  
// Introducción del tamaño del filtro. Debe ser inferior a N/10  
do          
{   
   scanf(“%d”, &tamfiltro); 
}
while(tamfiltro>=N/10);  
// Filtro de la media  
for(i=tamfiltro;i<N-tamfiltro;i++)       
for(j=tamfiltro;j<N-tamfiltro;j++)              
{           for(k=i-tamfiltro;k<=i+tamfiltro;k++)            
for(l=j-tamfiltro;l<=j+tamfiltro;l++)    B[i][j]+=A[k][l];                       
B[i][j]= B[i][j]/((2*tamfiltro+1)*(2*tamfiltro+1));               }  
// Imprimir matriz B   
for(i=0;i<N;i++)  
{       
for(j=0;j<N;j++)     
{   printf(“%d ”, B[i][j]);     
}     
printf(“\n”);  
}        
}
