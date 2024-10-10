#include <stdio.h>
int myInt;
char myChar;
double myDouble;
float myFloat;
char myString[] = "hello00";

int main(){
    printf("%lu\n", sizeof(myInt));
    printf("%lu\n", sizeof(myChar));
    printf("%lu\n", sizeof(myDouble));
    printf("%lu\n", sizeof(myFloat));
    printf("%lu\n", sizeof(myString));
}