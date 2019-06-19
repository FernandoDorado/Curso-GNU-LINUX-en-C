/* Tratamiento de señales NO EN TIEMPO REAL */

#define _POSIX_C_SOURCE 200112L
#define _XOPEN_SOURCE 600
#include<signal.h>
#include<sys/types.h>
#include<time.h>
#include<errno.h>
#include<stdlib.h>
#include<stdio.h>
#include<unistd.h>
#include<math.h>
#include<pthread.h> 
#include<string.h>

int cuenta = 0;

void mf(int t){
    cuenta++;
}

int main(int argc, char **argv){
    sigset_t masc;
    struct sigaction acc;
    struct timespec time1 = {1,0L};
    siginfo_t info;
    union sigval valor;
    int i = 0;

    sigemptyset(&masc);
    sigaddset(&masc,SIGRTMIN);

    /* SIGRTMIN no se programa para tiempo real */
    acc.sa_handler = mf;
    sigemptyset(&acc.sa_mask);
    acc.sa_flags = 0;
    sigaction(SIGRTMIN, &acc,NULL);

    /* Al estar bloqueadas, se encolan las señales */
    printf("Bloquemos señales\n");
    fflush(stdout);

    sigprocmask(SIG_BLOCK, &masc, NULL);
    for(i = 0; i<8; i++)
        kill(getpid(),SIGRTMIN);
    sleep(1);
    printf("Han llegado %d señales\n", cuenta); 
    fflush(stdout);
    /* Las desbloqueamos y entran al manejador */
    printf("Desbloqueamos señales\n");
    fflush(stdout);

    sigprocmask(SIG_UNBLOCK, &masc, NULL);
    printf("Han llegado %d señales\n", cuenta);   



    return 0;


}
