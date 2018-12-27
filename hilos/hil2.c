#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>

void *rutina (void *pr);


int i;  //Variable global. Accesible a todos los hilos

int main (int argc, char *argv[]) 
{
	pthread_t hilo1;
	int *p;


	if (0 != pthread_create(&hilo1,NULL, rutina, (void *)&i)) 
		return -1;
	
	printf("Estoy esperando que acabe el hilo\n");

	/* Queremos que el hilo finalize, pero además queremos recoger el estado de terminación */

	pthread_join(hilo1,(void **)&p);

	printf ("Valor de terminación: %d\n",*p);

	free(p); /* Sabemos que se pidió con malloc en la rutina asociada al hilo */ 

	printf ("Fin\n");

	return 0;

}

void *rutina (void *pr){

	int valor = 10;
	//int *pr;
	printf("Estamos dentro de la rutina\n");
	valor = 15;
	pr = malloc(sizeof(int));
	*((int *)pr) =valor;
	pthread_exit((void *)pr);

}