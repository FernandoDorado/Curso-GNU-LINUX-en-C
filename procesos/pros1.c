#include <stdio.h>
#include <errno.h>
#include <string.h>
#include <sys/types.h>
#include <unistd.h>



int sumar(int x, int y)
	{
		int result;
		result = x + y;
		printf("Estoy : hijo->funcion sumar\n");
		return result;
	}


int main(){

	pid_t hijo;
	int res;

 	hijo= fork();
 	while(1){
	if(hijo==-1) printf("Hay algun error");
	else
	{
		if(hijo==0){
			/*Estoy dentro del hijo*/
			printf("Soy el hijo\n");
			res = sumar(2,3);
			exit(0);

		}
	}
	sleep(5);
	printf("Soy el padre\n");
}

	return(0);
}

/*Como vemos, primero se ejecuta el hijo una vez, y luego el bucle while repite iterativamente el codigo del padre*/
