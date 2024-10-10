#include <stdio.h>
#include <math.h>
int calc(int a, int *x, int *z);
int main(){
    int a = 10;
    int b, c;
    calc(a, &b, &c);
    printf("b = %d, c = %d", b, c);
}

int calc(int a, int *x, int *z){
    *x = pow(a, 2);
    *z = pow(a, 3);
    return 0;
}