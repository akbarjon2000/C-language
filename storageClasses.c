#include <stdio.h>

static int count = 5;
int external;
extern void write_extern();
int main(){
    int mount;
    auto int mount2;
    register int miles;
    static int i = 5;
    external = 15;
    
    printf("%p", &mount);
    printf("\n%p", &mount2);
    // printf("\n%d", &miles);  //can not gegt the address of a register variable;
    printf("\n%p", &count);
    printf("\n%p", &i);
    write_extern();
    return 0;
}