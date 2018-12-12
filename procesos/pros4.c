#define _POSIX_C_SOURCE 199309L
#include <unistd.h>
#include <stdio.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <errno.h>
#include <string.h>

int main(int argc, char **argv)
{
  int result;
  pid_t pid;
  pid_t pid1;

  printf("Soy el padre\n");
  fflush(stdout);
  pid = fork();
  if(pid == (pid_t)0)
  {
    execl("./args_hijo", "otra cosa", "-a", "-b", NULL);
    printf("Algo ha salido mal. Error %s\n", strerror(errno));
    exit(1);
  }
  if(pid < 0) printf("error en fork %s\n", strerror(errno));
  printf("Padre esperando al hijo %ld\n", (long)pid);
  fflush(stdout);
  
  sleep(30); 

  pid1 = wait(&result);
  printf("padre: estado en bruto %d %x\n", result, result);
  if(pid1 >= 0) {
     if(WIFEXITED(result)) printf("Resultado del hijo %d\n", 
                       WEXITSTATUS(result));
     else if(WIFSIGNALED(result))
         printf("El hijo fue eliminado por senal\n");
  }
  else printf("%s\n", strerror(errno));

  return 0;
}
}
