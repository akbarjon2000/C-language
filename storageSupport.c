#include <stdio.h>

extern int external;

void write_extern(void){
    printf("external is: %d\n", external);
}