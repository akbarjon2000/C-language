#include <stdio.h>
#include <stdlib.h>


struct MyStruct{
    struct MyStruct *a;
    int b;
    struct MyStruct *c;
};

int main(){
    struct MyStruct *p1, *p2, *start;

    p1 = (struct MyStruct *)malloc(sizeof(struct MyStruct));
    p1->a = NULL; p1->b = 10; p1->c = NULL;

    start = p1;
    int i;

    for(i = 1; i <=5; i++){
        p2 = (struct MyStruct *)malloc(sizeof(struct MyStruct));
        p2->a = p1; p2->b = i*2; p2->c = NULL;
        p1->c = p2;
        p1 = p2;
    }

    p1 = start;

    while(p1 != NULL){
        printf("address of before struct: %d, self add: %d, b = %d, address of the next struct %d\n",p1, p1->a, p1->b, p1->c);
        p1 = p1->c;
    }

    struct MyStruct *current = p1;
    struct MyStruct *next;

    while(current != NULL){
        next = p1->c;
        free(current);
        current = next;
    }
    return 0;
}