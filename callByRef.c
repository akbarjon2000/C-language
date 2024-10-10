#include <stdio.h>

int add(int *x, int *y);

int main(){
    int a = 10, b = 12;
    int c = add(&a, &b);
    printf("result is %d", c);
}

int add(int *x, int *y){
    int z = *x + *y;
    return &z;
}