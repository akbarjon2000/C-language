#include <stdio.h>
// #pragma pack(1)

struct __attribute__((packed)) MyStruct{
    char a;
    char b;
    int c;
    char d;

};

int main(){
    printf("%d\n", sizeof(struct MyStruct));
    return 0;
}