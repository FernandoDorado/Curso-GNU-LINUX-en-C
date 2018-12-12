/*Vamos a realizar un programa que espere la finalización del hijo 
* gracias a las llamadas wait, waitpid.*/


#include <stdio.h>
#include <errno.h>
#include <string.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>

void cuenta(){

	for(int cont=1;cont<6;cont++){
		printf("Estoy dentro del hijo-> cuenta: %d\n",cont);
		sleep(1);
	}
}


int main(int argc, char argv[]){

pid_t hijo;
pid_t hijo_fin;
int estado;
int res;
hijo= fork();
int aux=0;

 	while(aux<10){
	if(hijo==-1) printf("Hay algun error");
	else
	{
		if(hijo==0){
			/*Estoy dentro del hijo*/
			printf("Soy el hijo\n");
			cuenta();
			exit(0);
		}
	}

	hijo_fin=wait(&estado);
	/*Esperamos que acabe el hijo*/
	sleep(1);
	printf("Soy el padre\n");
	aux++;
}

	return(0);

}



/*
Cuando no ponemos waitpid ocurriría esto.
Soy el hijo
Estoy dentro del hijo-> cuenta: 1
Estoy dentro del hijo-> cuenta: 2
Soy el padre
Estoy dentro del hijo-> cuenta: 3
Soy el padre
Estoy dentro del hijo-> cuenta: 4
Soy el padre
Estoy dentro del hijo-> cuenta: 5
Soy el padre
Soy el padre
Soy el padre
Soy el padre
Soy el padre
Soy el padre
Soy el padre



Cuando lo añadimos:
Soy el hijo
Estoy dentro del hijo-> cuenta: 1
Estoy dentro del hijo-> cuenta: 2
Estoy dentro del hijo-> cuenta: 3
Estoy dentro del hijo-> cuenta: 4
Estoy dentro del hijo-> cuenta: 5
Soy el padre
Soy el padre
Soy el padre
Soy el padre
Soy el padre
Soy el padre
Soy el padre
Soy el padre
Soy el padre
Soy el padre
*/

