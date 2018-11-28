/* Implementación de MUTEX usando semáforos */

/*Funcionamiento programa:
Incrementamos un número dado por cadena de carácteres, cada incremento lo hace
un proceso hijo diferente, por lo que necesitaremos sincronización. Hemos
introducidos esperas para simular un proceso real y comprobar la condición de
carrera
*/

/* Funcionamiento semáforo:
se inicializa con un valor entero no negativo y siempre que sea no negativo
los procesos pueden acceder al recurso que controla el semáforo. Siempre que
un proceso vaya a acceder a un recurso, tiene qu restarle una unidad al semáforo
y cuando acabe de usarle, sumarle una unidad 
*/


/* Funciones básicas 
int sem_init (sem_t *semáforo,int compartido, unsigned int inicial)) -> Inicializamos semáforo
int sem_post (sem_t *psem) -> Incrementa semáforo. 
int sem_wait (sem_t *psem) -> Decrementa semáforo. Si su valor es menor que 0, bloquea el proceso
							  hasta tener una valor >=0 
*/


#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include <sys/mman.h>
#include <semaphore.h>
#include <string.h>

#define sem 1 

int main(int argc, char argv[])
{
	/* Mapeamos el objeto sobre el espacio de direcciones de procesado */
	/* Habilitamos lectura y escritura
	   Permite compartir mapeo con otro procesos, y además los cambio que haga el proceso no los verán los demás*/
	char *x = mmap(NULL, sizeof(char)*10 , PROT_READ | PROT_WRITE, MAP_SHARED | MAP_ANONYMOUS, -1 ,0);
	strcpy(x,"0");

	int i;
	int hijo;

	/* Creamos semáforo */
	sem_t *semaforo = mmap(NULL, sizeof(sem_t), PROT_READ | PROT_WRITE, MAP_SHARED | MAP_ANONYMOUS, -1,0);

	int act;

	sem_init (semaforo, 1,1);

	/*
	1 arg: identificador semáforo
	2 arg: vale "1" porque lo vamos a usar como semáforo para memoria compartida
	3 arg: valor inicial del semáforo
	*/

	for(i=0;i<20;i++){
		hijo = fork();

		if(hijo==0) //Si estoy dentro del proceso hijo
		{
			usleep(rand()%20500); //Espera aleatorio para simular proceso real

			if(sem)
				sem_wait(semaforo);

			printf("[%d] Intentando acceder al recurso\n", getpid()); 
			act=atoi(x);
			printf("[%d] Usando el recurso\n", getpid());
			act++;
			sprintf(x,"%d",act);

			if(sem)
				sem_post(semaforo);
			printf("[%d] Acabo de usar el recurso\n", getpid());
     		usleep(rand()%20500);

     		if(sem)
     			sem_wait(semaforo);
     		printf("[%d] Intentando acceder al recurso\n", getpid()); 
			act=atoi(x);
			printf("[%d] Usando el recurso\n", getpid());
			act++;
			sprintf(x,"%d",act);

			 if (sem)
      			  sem_post(semaforo);
     		 printf("[%d] Acabo de usar el semaforo\n", getpid());
     		 printf("[%d] Existe\n", getpid());
     		 exit(1);
     	}
		}	

		while(wait(NULL)>=0);

		printf("x is: %s\n",x);

		/*Liberamos la memoria que no usamos)*/
		munmap(x,sizeof(int));
		munmap(semaforo,sizeof(sem_t));

		return 0;

	}

