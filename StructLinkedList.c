#include <stdio.h>
#include <stdlib.h>


struct MyStruct{
    int a;
    struct MyStruct *b;
};

int main(){
    struct MyStruct *p1, *p2, *start;

    p1 = (struct MyStruct *)malloc(sizeof(struct MyStruct));
    p1->a = 10; p1->b = NULL;

    start = p1;
    int i;

    for(i = 1; i <=5; i++){
        p2 = (struct MyStruct *)malloc(sizeof(struct MyStruct));
        p2->a = i*2; p2->b = NULL;
        p1->b = p2;
        p1 = p2;
    }

    p1 = start;

    while(p1 != NULL){
        printf("address of x: %d, a = %d, address of the next struct %d\n", p1, p1->a, p1->b);
        p1 = p1->b;
    }
    return 0;
}