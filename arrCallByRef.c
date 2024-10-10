#include <stdio.h>
#include <math.h>
int square(int *);
int main(){
    int arr[] = {1,2,3,4,5};
    int *x = arr, i;

    for(i = 0; i<=4 ;i++){
        printf("%d\n", *x);
        x++;
    }
    int arr2  ={1,2,3};
    int *y = arr;
    square(arr);
    for(i = 0; i<=2;i++){
        printf("%d", *y);
        *y++;
    }
    return 0;
}

int square(int *arr){
    for(int i = 0; i<=2;i++){
        arr[i] = pow(arr[i], 2);
    }
    return 0;
}