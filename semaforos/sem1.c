/*	SEMÁFOROS */

/* Los semaforos son un mecanismo de sincronización 
 
   Protege el acceso a zonas de memoria que son secciones críticas */


#include <pthread.h>
#include <semaphore.h>
#include <stdio.h>

#define iter 10000
static void * funcion_hilo1(void* arg);
static void * funcion_hilo2(void* arg);
//Recurso compartido entre hilos
static int cont = 0;

sem_t sem1;

int main(void){

	//Creamos 2 hilos
	pthread_t hilo1,hilo2;

	sem_init(&sem1,0,1); //Inicializamos semáforo

	/*
	1 argumento : Referencia al semaforo
	2 argumento : Indicamos si el semaforo es compartido entre procesos
	3 argumento : Valor de inicialización del semáforo
	*/


	pthread_create(&hilo1,NULL, *funcion_hilo1, NULL);
	pthread_create(&hilo2,NULL, *funcion_hilo2, NULL);

	//Esperamos a que terminen
	pthread_join(hilo1,NULL);
	pthread_join(hilo2,NULL);

	printf("EL valor de la cuenta es %d \n", cont);

}


static void * funcion_hilo1(void* arg){

	//Lo que hace este hilo es iterar para aumentar la variable cont
	for (int i=0;i<iter;i++){

		sem_wait(&sem1); //Decrementamos el semaforo y tiene valor 0
		cont+=1;
		sem_post(&sem1); //Incrementamos el semáforo 
	}

}

static void * funcion_hilo2(void* arg){

	//Lo que hace este hilo es iterar para decrementar la variable cont
	for (int i=0;i<iter;i++){

		sem_wait(&sem1); 
		cont-=1;
		sem_post(&sem1);
	}

}