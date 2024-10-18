#include <stdio.h>

int main(){
    int arr[3][3][3] = {
        {{11, 12, 13}, {14, 15, 16}, {17, 18, 19}},
        {{20, 21, 22}, {23, 24, 25}, {26, 27, 28}},
        {{29, 30, 31}, {32, 33, 34}, {35, 36, 37}}
    };

    int *ptr = &arr[0][0][0];
    int i, j, k, JMax = 3, KMax = 3;
    
    for (i = 0; i<3; i++){
        for(j = 0; j<JMax; j++){
            for (k = 0; k<KMax; k++){
                printf(" %d ", *(ptr + (i * JMax * KMax) + (j * KMax + k)));
            }
        }
        printf("\n");
    }

}