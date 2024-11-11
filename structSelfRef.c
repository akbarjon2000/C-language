#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct{
    int a;
    struct MyStruct *b;

}MyStruct;

int DynamicStruct();

int main(){
    MyStruct x = {10, NULL}, y = {20, NULL}, z = {30, NULL};
    MyStruct *p1, *p2, *p3;

    x.b = p2;
    y.b = p3;

    printf("address of x: %d, a = %d, address of the next struct %d\n", p1, x.a, x.b);
    printf("address of y: %d, a = %d, address of the next struct %d\n", p2, y.a, y.b);
    printf("address of z: %d, a = %d, address of the next struct %d\n", p3, z.a, z.b);

    DynamicStruct();

    return 0;
}

int DynamicStruct(){
    MyStruct *p1, *p2, *p3;

    p1 = (struct MyStruct *)malloc(sizeof(MyStruct));
    p2 = (struct MyStruct *)malloc(sizeof(MyStruct));
    p3 = (struct MyStruct *)malloc(sizeof(MyStruct));

    p1->a = 10; p1->b = p2;
    p2->a = 20; p2->b = p3;
    p3->a = 30; p3->b = NULL;

    printf("address of x: %d, a = %d, address of the next struct %d\n", p1, p1->a, p1->b);
    printf("address of y: %d, a = %d, address of the next struct %d\n", p2, p2->a, p2->b);
    printf("address of z: %d, a = %d, address of the next struct %d\n", p3, p3->a, p3->b);

    while(p1 != NULL){
        printf("WHILE: address of x: %d, a = %d, address of the next struct %d\n", p1, p1->a, p1->b);
        p1 = p1->b;
    }
    MyStruct *current = p1;
    MyStruct *next;

    while(current != NULL){
        next = p1->b;
        free(current);
        current = next;
    }
    return 0;
}