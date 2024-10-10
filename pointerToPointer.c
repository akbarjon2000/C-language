#include <stdio.h>

int main(){
    int a = 10;
    int *ptr = &a;
    int **ptrptr = &ptr;

    printf("value of a: %d, address of a: %d \n", a, &a);
    printf("ptr: %d, value of ptr: %d, address of ptr: %d\n",ptr, *ptr, &ptr);
    printf("ptrptr: %d,value of *ptrptr: %d, value of **ptrptr: %d, address of ptrptr: %d \n",ptrptr, *ptrptr, **ptrptr, &ptrptr);
    return 0;


}