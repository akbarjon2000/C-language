#include <stdio.h>

static int x = 1;

int counter(int);

int main(){
    static int y = 10;

    counter(y);
    printf("value of y in main: %d\n", y);
    printf("value of x in main: %d\n", x);
    counter(y);
    printf("value of y in main: %d\n", y);
    printf("value of x in main: %d\n", x);
    counter(y);
    printf("value of y in main: %d\n", y);
    printf("value of x in main: %d\n", x);
    return 0;
}

int counter(int y){
    printf("value of x in counter: %d\n", x);
    x++;
    printf("value of y in counter: %d\n", y);
    y++;
    return 0;
}