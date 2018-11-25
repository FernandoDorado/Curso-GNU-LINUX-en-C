/* SEÑALES */

/*  Veremos como enviar y tratar una señal 
	Para mandar una señal desde consola : kill
		-Para ver todas las señales disponible : kill -l 
			-SIGKILL : Matar proceso
			-SIGSTOP : Pausar un proceso
			-SIGCONT : Para hacer que el proceso en pausa continue

	Ver la lista de procesos ejecutandose : ps U 

*/

#include <signal.h>
#include <unistd.h>
#include <stdio.h>

void funcion(int signal){
	printf("La señal que he mandado es %d \n",signal);
}

int main (int argc, char *argv[]) {


	signal(SIGIO, &funcion);
	/*
	1 arg: Entero que indique el numero de la señal
	2 arg: Cuando reciba esa señal voy a llamar a esa función
	*/


	while(1){
		//Proceso que se ejecuta continuamente imprimiendo por consola
		//Lo mataremos por consola con : kill -SIGTOP PID 

		printf("Proceso en ejecucion: Manda kill -SIGSTOP PID\n");
		sleep(1);
	}
	
	return 0;

}