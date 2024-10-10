#include <stdio.h>

int main(){
    float a = 10.25;
    float *x = &a;
    float **y = &x;
    float ***z = &y;
    printf("a = %f\nx = %f\ny = %f\nz = %f\n", a, *x, **y, ***z);
    *x = 11.25;
    printf("a = %f\n", a);
    **y = 12.25;
    printf("a = %f\n", a);
    ***z = 13.25;
    printf("a = %f\n", a);

}