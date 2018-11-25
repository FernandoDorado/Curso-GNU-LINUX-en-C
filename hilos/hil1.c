/* HILOS */

/*
Creamos un hilo que escriba N lineas en un archivo
*/


#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>

void *rutina (void *arg);

int main (int argc, char *argv[]) 
{
	int valor = atoi(argv[1]); //atoi : convierto de char -> entero
	pthread_t hilo1;


	if (0 != pthread_create(&hilo1,NULL, rutina, &valor)) //Paso por consola el numero de líneas que quiero escribir
		return -1;
	

	/* Esta funcion nos crea el hilo:
		Si la función devuelve algo diferente de 0, voy a devolver un error.

		1 arg: puntero al identificador
		2 arg: atributos del hilo ( NULL : DEFECTO )
		3 arg: rutina que se va a ejecutar al comenzar el hilo
		4 arg: los argumentos de entrada de la rutina 
	*/

	pthread_join(hilo1, NULL); //Queremos esperar a que el hilo finalize

	return 0;

}

void *rutina (void *arg){
	int i;
	int aux = *((int*)arg);
	int fd;
	char buf[]= "Nueva linea \n";

	printf("Estamos dentro del hilo \n");

	for(i=0;i<aux;i++){
		fd = open("/home/inanox/Escritorio/file.txt",O_WRONLY|O_APPEND); //Modo escritura, y cada vez que abramos el fichero escribimos nueva línea
		write(fd,buf,sizeof(buf)-1);
		close (fd);

	}


}