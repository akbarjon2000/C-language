#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]){
    int *p = malloc(sizeof(int)); 
    // assert(p != NULL);
    if(p == NULL){
        exit(1);
    }
    printf("(%d) address of p: %08x\n",getpid(), (unsigned) p);
    *p=0; //a3 
    while (1) {
        sleep(1);
    *p = *p + 1;
    printf("(%d) p: %d\n", getpid(), *p); // a4
    }
    return 0; 
}