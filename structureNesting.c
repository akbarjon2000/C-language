#include <stdio.h>

struct Student{
    char *name;
    int age;
    struct Courses{
        char *CName;
        int CID;
    } Courses[3];
} ;

int main(){
    struct Student students[3] = {
        {"Akbarjon", 25, {{"C Lang", 110}, {"Java", 111}}},
        {"Abdulloh", 24, {{"Java", 111}, {"Python", 112}}},
        {"Ali", 27, {{"Kotlin", 261}, {"HTML", 113}}}
    };

    int i, j;

    for(i = 1; i<=3; i++){
        printf("Student %d: %s,\nAge: %d,\n", i, students[i-1].name, students[i-1].age);
        for(j = 0; j<2; j++){
            printf("Class %d: %s, Class ID: %d \n", j+1, students[i-1].Courses[j].CName, students[i-1].Courses[j].CID);
        }
    }
    return 0;
}