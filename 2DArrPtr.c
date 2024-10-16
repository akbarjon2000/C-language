#include <stdio.h>

int main(){
    int arr[2][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8}
    };
    int *ptr = arr;
    int ROWS = 2, COLS = 4;
    int i , j;

    for(i = 0;i<2;i++){
        for (j = 0; j<4;j++){
            printf("%d ; %d ", *(ptr + i * COLS + j), (ptr+i*COLS+j));
        }
        printf("\n");
    }
}