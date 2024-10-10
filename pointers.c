#include <stdio.h>

int main(){
    int num;
    char myChar;

    int* ptr = &num;
    char *charPtr = &myChar;

    printf("%p\n", &num);
    printf("%p\n", ptr);

    printf("%p\n", charPtr);

    int myNumbers[] = {1, 2, 3, 4};
    printf("%p\n", myNumbers);
    printf("%p\n", &myNumbers[0]);
    printf("%d\n", *myNumbers);
    printf("%d\n", *(myNumbers + 1));
    printf("%d\n", *(myNumbers+2));

    // changing elements of array using ponters:

    *myNumbers = 10;
    *(myNumbers + 1) = 21;

    printf("%d, %d \n", *myNumbers, *(myNumbers+1));

    return 0;
}

