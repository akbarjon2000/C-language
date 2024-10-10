#include <stdio.h>
#include <stdlib.h> / it is important to include thus library to work with memory allocation;

int main(){
    int *students;
    int numStudents = 12;
    students = calloc(numStudents, sizeof(*students));
    students[1] = 6;
    printf("%d\n%d\n%d\n", *(students), *(students+1), *(students + 2));
}
