#include <stdio.h>

int* test(int*);

int main(){
    int a[] = {1, 2, 3 ,4};
    int i;
    int* b = test(a);// pass the array directly, no need for &a
    for(i = 0; i<4; i++){
        printf("%d\n", b[i]);
    }
    return 0;
}

int* test(int *a){
    int i;
    for(i = 0; i<4; i++){
        a[i] = 2*a[i];
    };
    return a;
}