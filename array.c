#include <stdio.h>

int main(){
    int arr[5] = {0};
    int arr2[5] = {1, 2};
    int arr3[5] = {1, 2, [4] = 5, [3] = 2};

    char arr4[] = "Hello";

    printf("arrray elements:\n");
    for(int i = 0; i<=4; i++){
        printf(" %d: %d", arr[i], &arr[i]);
        printf(" %d: %d", arr2[i], &arr2[i]);
        printf(" %d: %d", arr3[i], &arr3[i]);
        printf(" %c: %d\n", arr4[i], &arr4[i]);

    }
    printf("address of arr1: %d\n", arr);
    printf("1st el of arr1: %d\n", *arr);
    
    return 0;
}

