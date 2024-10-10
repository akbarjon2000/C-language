#include <stdio.h>

int add(int x, int y){
    int z = x + y;
    return z;
}

int main(){
    int a = 21, b = 9;
    int z = add(a, b);

    printf("The addition = %d", z);
}