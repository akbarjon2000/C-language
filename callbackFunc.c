#include <stdio.h>

void hello(){
    printf("Hello world");
}

void callback(void (*ptr)()){
    printf("Calling a function with its pointer\n");
    (*ptr)();
}

int main(){
    void (*funcPointer)() = hello;
    callback(funcPointer);
    return 0;
}