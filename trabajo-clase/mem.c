#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "common.h"

int main(int argc, char *argv[]) {
    if (argc != 2) { 
	fprintf(stderr, "usage: mem <value>\n"); 
	exit(1); 
    } 
    int *p; //apuntador ya que tiene el *, imprime p y duevuelve la dirección de memoria
    p = malloc(sizeof(int)); //sirve para calcular los bits
    assert(p != NULL); 
    printf("(%d) addr pointed to by p: %p\n", (int) getpid(), p);
    *p = atoi(argv[1]); // assign value to addr stored in p
    while (1) {
	Spin(1);
	*p = *p + 1; //el esta sumando uno al valor que tiene en p
	printf("(%d) value of p: %d\n", getpid(), *p);
    }
    return 0;
}

