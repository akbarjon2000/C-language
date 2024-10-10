#include <stdio.h>
#include <math.h>

int callback(int, int (*ptr)(int));
int root(int);
int square(int);

int main(){
    int a = 3;
    int x, y;
    int (*root_pointer)() = &root;
    int (*square_pointer)() = &square;
    x = callback(a, root_pointer);
    y = callback(a, square_pointer);
    printf("x = %d\n y = %d", x, y);
    return 0;
};

int callback(int a, int (*ptr)(int)){
    return ptr(a);
};

int root(int a){
    return pow(a, 0.5);
};

int square(int a){
    return a*a;
};