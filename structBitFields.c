#include <stdio.h>
#pragma pack(1)

struct {
    unsigned int widthvalidated: 1;
    unsigned int heightvalidated: 1;
} status;

int main(){
    printf("%lu\n", sizeof(status));
    return 0;
}