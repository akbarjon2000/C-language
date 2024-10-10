#include <stdio.h>
#include <math.h>
float * arr(int x, float *arr);

int main(){
    int x = 3;
    float a[3];
    arr(x, a);

    for (int i = 0; i < 3;i++){
        printf("%f ", a[i]);
    };
    return 0;
    
}

float *arr(int x, float *arr){
    arr[0] = pow(x, 2);
    arr[1] = pow(x, 3);
    arr[2] = pow(x, 0.5);
    return arr;
}