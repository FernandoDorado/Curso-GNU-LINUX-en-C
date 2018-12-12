
/*La llamada "exec" puede hacer que el proceso ejecuta un ejecutable */

#include <stdio.h>
#include <errno.h>
#include <string.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>


int main()
{

	pid_t hijo;
	hijo = fork();

    
    while(1){
	if(!hijo){
			/*Estoy dentro del hijo*/
			execl("./sumar","sumar","12","-3",NULL);
			exit(1);
		}
	else{
	    printf("Soy el padre\n");
        sleep(2);
        }
    }
	return 0;
}
