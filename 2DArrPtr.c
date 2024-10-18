#include <stdio.h>

int method2();

int main(){
    int arr[2][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8}
    };
    int *ptr = arr;
    int ROWS = 2, COLS = 4;
    int i , j;
    printf("size of arr: %d\n", sizeof(arr));
    for(i = 0;i<2;i++){
        for (j = 0; j<4;j++){
            printf("%d ; %d ", *(ptr + i * COLS + j), (ptr+i*COLS+j));
        }
        printf("\n");
    }
    printf("\n");
    // method2();
}
//simpler way to access the arr though pointer

int method2(){
    int arr[2][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8}
    };
    int *ptr = &arr[0][0];
    int i,j, k = 0;
    int length = sizeof(arr)/sizeof(arr[0][0]);
    
    for (i = 0; i < 2; i++){
        for(j = 0; j < 4; j++){
            printf("%d", *(ptr + k));
            k++;
        }
        printf("\n");
    }
    return 0;
}