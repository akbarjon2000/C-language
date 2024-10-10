#include <stdio.h>
#include <stdlib.h>
int *arrFunc();

int main(){
    int *arr = arrFunc();
    printf("%d ", arr[0]);
    printf("%d ", arr[1]);
    printf("%d ", arr[2]);
    return 0;
}

int *arrFunc(){
    int *arr = (int *)malloc(3*sizeof(int));
    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 3;
    return arr;
}