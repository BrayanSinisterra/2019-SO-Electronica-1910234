#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main(int argc, char *argv[]) {
    pid_t pid; //defiunimos una variable de pid
    //pid = getpid(); //obtiene el idenficiador de proceso que invoca la fiuncion
    //printf("Mi edentificador de proceso es %d\n",pid);
    printf("hola\n");
    pid = fork();//invoco el fork y se crean dos procesos
    printf("hola a todos\n");
    if(pid != 0){
	printf("Soy el padre de mi mi id es %d y el de mi hijo es %d\n",getpid(),pid);
    }else{
	printf("Soy el hijo con id %d y mi variable pid es %d\n",getpid(),pid);
    }
    return 0;
	
}
