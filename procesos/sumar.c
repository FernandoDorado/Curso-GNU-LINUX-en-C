#include <stdio.h>
#include <errno.h>
#include <string.h>
#include <sys/types.h>
#include <unistd.h>



int main(int argc, char **argv){
		int result=0;
        int x;

        for(int i=1;i<argc;i++){
        sscanf(argv[i],"%d",&x);
        result=result+x;
        }


		
		printf("Estoy : hijo. Resultado = %d\n",result);
		return 0;
}
