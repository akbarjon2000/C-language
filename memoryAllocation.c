#include <stdio.h>
#include <stdlib.h> // it is important to include thus library to work with memory allocation;
#include <string.h>

int main(){
    //malloc(size);
    char *name;
    name = (char *)malloc(sizeof("Abdulloh") + 1);
    strcpy(name, "Abdulloh");    
    printf("%s\n", name);
    printf("%lu\n", sizeof(name));
    //calloc(num, size)
    int *students;
    int numStudents = 12;
    students = calloc(numStudents, sizeof(int));
    students[1] = 6;
    printf("%d\n%d\n%d\n", *(students), *(students+1), *(students + 2));
    //realloc(ptr, new_size)
    int *arr;
    arr = (int *)calloc(10, sizeof(*arr));
    arr = (int *)realloc(arr, 15 * sizeof(int));
    printf("array 13th element: %d\n", arr[12]); // prints 0 or garbage depending on the memory location
    //free(*ptr)
    free(name);
    free(arr);
    free(students);
}
