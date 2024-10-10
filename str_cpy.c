#include <stdio.h>
#include <stdlib.h>  // For malloc

void str_cpy(char *, char *);
int str_len(char *ptr);

int main(){

   char *ptr = "How are you doing?";
   char *ptr1;
   ptr1 = (char *)malloc(str_len(ptr) + 1);
   str_cpy(ptr1, ptr);

   printf("%s", ptr1);

   return 0;
}

void str_cpy(char *ptr1, char *ptr){
   int i;
   for(i = 0; ptr[i] != '\0'; i++){
      ptr1[i] = ptr[i];
   }
   ptr1[i] = '\0';
}
int str_len(char *ptr){
    int length = 0;
    while(*ptr != '\0'){
        length++;
        ptr++;
    }
    return length;
}