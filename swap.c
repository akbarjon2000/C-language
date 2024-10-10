#include <stdio.h>

int swap(int *x,int *y);

int main(){
    int a = 11, b = 22;
    printf("actual value a = %d, b = %d\n", a, b);
    swap(&a, &b);
    printf("swapped values: a = %d, b = %d\n", a, b);
    return 0;
}

int swap(int *x, int *y){
    int temp;
    printf("x = %d, y = %d\n", *x, *y);
    temp = *x;
    *x = *y;
    *y = temp;
    return 0;
}