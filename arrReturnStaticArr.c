#include <stdio.h>

int *arrFunc();

int main(){
    int *arr = arrFunc();
    printf("%d ", arr[0]);
    printf("%d ", arr[1]);
    printf("%d ", arr[2]);
    return 0;
}

int *arrFunc(){
    static int arr[3] = {1, 2, 3};//if it is not static the variable in the local scope no longer exists after the function scope is over;
    return arr;
}