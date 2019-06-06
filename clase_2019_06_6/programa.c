#include <stdio.h>

int main(int argc, char *argv[]) {
   
    int x1, x2, x3; 
    
    x1 = sizeof(int);
    x2 = sizeof(char);
    x3 = sizeof(float);
    printf("valor de bits por variable int, char, float : %d %d %d \n", x1, x2, x3);
    return 0;
}



