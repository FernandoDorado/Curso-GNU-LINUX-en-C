/* escritor2.c */
/* Prueba de cola de mensajes: Programa emisor */

#define _POSIX_C_SOURCE 199309L

#include <stdio.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <mqueue.h>
#include <signal.h>
#include <errno.h> 
#include <stdlib.h>

#define TAM_MSG 11


int main(int argc, char **argv)
{
  int i;
  int car;
  mqd_t micola;
  struct mq_attr atributos;
  char buf[TAM_MSG]="Primer test";         /* Datos para enviar */
  int retorno;
  char recibido[TAM_MSG];
  int prio;

    
  /* Se borra la cola por si existiese */
 
  printf("escritor -> borrando cola\n");
  if(mq_unlink("/cola") != -1)
    printf("Ya existia una cola\n");

  /* Creacion y apertura de la cola de mensajes */
  
  atributos.mq_maxmsg = 1;
  atributos.mq_msgsize = TAM_MSG;
  atributos.mq_flags = 0;
  
  micola = mq_open("/cola", O_CREAT | O_WRONLY, S_IRWXU, &atributos);

  if(micola == (mqd_t)-1)
  { 
    printf("escritor -> error al abrir la cola\n");
    exit(1);
  }
  else printf("escritor -> cola abierta\n");


	retorno = mq_send(micola,buf,TAM_MSG,0);
		if (retorno==-1) printf("Error en la transmision\n");


  retorno = mq_receive(micola,recibido,TAM_MSG,&prio);
    if (retorno==-1) printf("Error en la recepcion\n");

	printf("La cadena que hemos recibido es %s \n",recibido);

return 0; 

}
