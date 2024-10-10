#include <stdio.h>
void readFile();
int main(){
   readFile();
   return 0;
}
void readFile(){
    FILE *fptr;
    char myString[100];
    fptr = fopen("/Users/akbarjon/C\ Language/example.txt", "r");

    fgets(myString, 100, fptr);

    printf("coming from myString%s\n", myString);

    fclose(fptr);
}

void append(){
    FILE *fptr;

   fptr = fopen("/Users/akbarjon/C\ Language/example.txt", "a");
   fprintf(fptr, "Hello Abdulloh!");
   fclose(fptr);
}
void open(){
    FILE *fptr;

   fptr = fopen("/Users/akbarjon/C\ Language/example.txt", "w");
   fprintf(fptr, "Hello there!");
   fclose(fptr);
}
void create(char name[]){
    FILE *fptr;

    fptr = fopen(name, "w");
    fclose(fptr);
}