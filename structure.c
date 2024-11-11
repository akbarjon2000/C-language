#include <stdio.h>
#include <string.h>

struct myStructure{
    int num;
    char letter;
    char str[100];
};

struct Rect{
    float len, brd;
    double area;
};

int secondary(struct myStructure);
int area(float len, float brd);
struct Rect area2(float x, float y);
int ptrStruct(struct Rect *);

int main(){
    struct myStructure s1;
    struct myStructure s2 = {12, 'b', "second \n"};
    struct myStructure s3;
    s3 = s2;
    
    s1.num = 21;
    s1.letter = 'A';
    strcpy(s1.str, "Some text");
    secondary(s1);
    printf("%c\n", s1.letter);
    printf("%s\n", s1.str);
    printf("%d, %c, %s", s2.num, s2.letter, s2.str);

    // Passing structure elements:

    struct Rect rec1;
    rec1.len = 10.5;
    rec1.brd = 5.5;

    area(rec1.len, rec1.brd);

// Returning struct variable:

    float len = 8.4;
    float brd = 3.5;

    struct Rect rec2 = area2(len, brd);
    printf("second rect area: %f \n", rec2.area);

//Pass by reference:

    struct Rect rec3;

    rec3.len = 5.7;
    rec3.brd = 2.6;

    ptrStruct(&rec3);
    printf("rectangle3 area: %f\n", rec3.area);


    return 0;
    
}

int secondary(struct myStructure s3){
    printf("\nSecondary: %s\n", s3.str);
    return 0;
}

//Passing structure elements:

int area(float len, float brd){
    float area = len * brd;
    printf("the area of rect : %f \n", area);
    return 0;
}

//returning a struct variable;

struct Rect area2(float x, float y){
    double area = (double)(x*y);
    struct Rect rec2 = {x, y, area};
    return rec2;
}

// pass by referance of struct:

int ptrStruct(struct Rect *rec3){
    rec3->area = (double)(rec3->brd * rec3->len);
    printf("rec3 area: %f\n", rec3->area);
    return 0;
}