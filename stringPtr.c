#include <stdio.h>
#include <string.h>

int str_len(char *ptr);

int main(){
    char *ptr = "Hello";

    printf("%s\n", ptr);
    printf("%d\n", str_len(ptr));
}

int str_len(char *ptr){
    int length = 0;
    while(*ptr != '\0'){
        length++;
        ptr++;
    }
    return length;
}