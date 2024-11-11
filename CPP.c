#ifndef __STDIO_H__
#include <stdio.h>
#endif
// #include <stdio.h>
#include "myheader.h"

#define DEBUG 1
#define message_for(a, b) printf(#a " and " #b ": we love you!\n")

#define tokenpastor(n) printf("token" #n " = %d\n", token##n)

#if !defined(MESSAGE)
    #define MESSAGE "My wish!\n"
#endif

int display();

#define square(x) ((x) * (x))
#pragma startup display
int display(){
    printf("\nThe message coming from display!");
    return 0;
}
int main(){
    message_for(Mom, Dad);
    int token34 = 40;
    tokenpastor(34);
    printf(MESSAGE);
    printf("%d\n", square(3));

    return 0;
}



#pragma exit display