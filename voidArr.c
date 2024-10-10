#include <stdio.h>

int main(){
    void *arr[4];
    int a = 1;
    float b = 1.25;
    char c = 'A';
    char *s = "Abdulloh";

    arr[0] = &a;
    arr[1] = &b;
    arr[2] = &c;
    arr[3] = s;

    printf("a = %d\n", *((int *)arr[0]));
    printf("b = %f\n", *((float *)arr[1]));
    printf("c = %c\n", *((char *)arr[2]));
    printf("s = %s\n", ((char *)arr[3]));

    return 0;
}