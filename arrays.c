#include <stdio.h>

int main(){
    int numarr[] = {1, 2, 3,4 ,5};
    printf("%lu\n", sizeof(numarr)); //size of the array depennds on the type.

    int length = sizeof(numarr) / sizeof(numarr[0]); //length formula in c

    printf("%d\n", length);

}