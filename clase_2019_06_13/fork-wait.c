#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>

int main(int argc, char *argv[]) {
    pid_t pid,pid2; //defiunimos una variable de pid
    int status;
    pid = fork();//invoco el fork y se crean dos procesos
    //printf("pid2  %d, pid proceso %d\n",pid2, getpid());
    if(pid != 0){
	pid2 = wait(&status);//le decimos que primero ejecute otro proceso y luego este
	printf("Soy el padre de mi id es %d y el de mi hijo es %d\n",getpid(),pid);
    }else{
	sleep(3);
	printf("Soy el hijo con id %d y mi variable pid es %d\n",getpid(),pid);
    }
    return 0;
	
}
