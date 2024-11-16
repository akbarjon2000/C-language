#include <stdio.h>
#include <errno.h>
#include <string.h>
#include <stdlib.h>

int main(){
    FILE *file;

    file = fopen("./tdsest.txt", "r");
    if(file == NULL){
    printf("Value of errno: %d \n", errno);
    perror("Error message perror");
    printf("Error message strerror: %s", strerror(errno));
    }else{
    char ch = fgetc(file);
    clearerr(file); // CLears the error
    if(ferror(file)){
        printf("\nFile is opened in writing mode! You cannot read data from it!");
        exit(EXIT_FAILURE);
        printf("\n%d", ferror(file)); //prints 1
    }else{
        printf("\n%d", ferror(file)); //prints 0
        exit(EXIT_SUCCESS);
    }

    }

    return 0;
}