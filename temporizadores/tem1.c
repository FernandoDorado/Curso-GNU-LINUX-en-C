
#define _POSIX_C_SOURCE 200112L
#include<unistd.h> 
#include<signal.h>
#include<stdio.h>


int timout;
int fin;

void mf(int sign){
timout = 1; /* Indicador de vencimiento del temporizador */
}

void contador(){
	int i;
	i = 1;

	while(1){
		printf("Cuenta = %d\n",i);
		i = i +1;
		sleep(1);
		if (i==10){
			fin = 1;
			break;break;
		}
	}

}


int main(int argc, char **argv){

	
	struct sigaction action;
	sigset_t set;

	/* Programación de la acción a realizar */
	action.sa_flags = 0;
	action.sa_handler = mf;
	sigemptyset(&action.sa_mask);
	sigaction(SIGALRM, &action, NULL);

	/* Desbloqueo de SIGALRM */
	sigemptyset(&set);
	sigaddset(&set, SIGALRM);
	sigprocmask(SIG_UNBLOCK, &set, NULL);

	/* Después se programa el despertador */
	timout = 0; 	
	alarm(11); 		
	fin = 0; 		

	while(!fin && !timout){
		contador();
	}
		
	if(fin) {
		/* Todo ha salido dentro de los margenes */
		alarm(0); /* Desactivamos temporizador */
		printf("Todo ha salido correctamente\n");
		return 0;}

	if(timout){ 
	/* Si ha habido sobretiempo */
	printf("Sobretiempo!\n");
	}

}