#include <stdio.h>
#include <stdlib.h>

int * func();

int main(){
    int *x = (int *)malloc(sizeof(int) * 10);
    int *y = func();
    *x = 100;

    printf("value of x %d\n", *x);// returning the integer value;

    free(x); // deallocate the *x pointer;

    printf("freed x: %d\n", *x); // resulting a garbage value;

    printf("value of y %d\n", *y);

    return 0;
}

int * func(){
    int a = 100;
    printf("address of a: %d\n", &a);
    return &a;
}