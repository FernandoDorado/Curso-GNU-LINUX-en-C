#include <stdio.h> 
int main(){ 
    int n,i,j; 
    int contador=0;     
    while (n!=0){     
        
        printf("Ingrese limite:"); 
        scanf("%d",&n);//n es el limite, por ejemplo de 1 a n=100 cuantos numeros primos hay         
        for(i=1;i<=n;i++){//For desde 1 hasta el n. 
            for(j=2;j<i;j++){//For desde 2 hasta (i-1), i va desde 1 a n.             
                if(i % j == 0){// si i modulo j es igual a cero, quiere decir que es divisible por algun numero  
                contador++;    // entoces el contador aumenta 
                }                 
            } 
            if(contador==0){// si i no es divisible por ningun numero entonces el contador sigue siendo cero y es primo 
                printf("%d. ",i); 
            } 
        contador=0;// vuelvo el contador a cero         
        } 
    }     
    return 0; 
}
