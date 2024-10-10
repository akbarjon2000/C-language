#include <stdio.h>

int main() {
    int var = 42;
    int *ptr;

    ptr = &var; // ptr now holds the address of var

    printf("Value of var: %d\n", var);
    printf("Address of var: %p\n", &var); // Prints the address of var
    printf("Value of ptr: %p\n", ptr);    // Prints the address stored in ptr (which is the address of var)
    printf("Value pointed to by ptr: %d\n", *ptr); // Dereferencing ptr to get the value of var

    return 0;
}