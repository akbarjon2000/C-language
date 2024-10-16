#include <stdio.h>

int main(){
    static int *ptr[5];
    int a = 10, b=20, c=30;
    int *ptrArr[3] = {&a, &b, &c};
    for(int i = 0; i < 5; i++){
        printf("ptr array element %d is: %d \n", i, ptr[i]);
    };
    printf("ptrArr element 0: %d\n", ptrArr[0]);
    printf("pointer: %d\n", **(ptrArr));
    printf("pointer: %d\n", ptrArr[0]);
    return 0;
}