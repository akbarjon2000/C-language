#include <stdio.h>
#include <string.h>

int main(){
    char greetings[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '!', '\0'};
    char greetings2[] = "Hello World!";
    char alphabet[50] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    char greet1[20] = "Hello";//size of greet1 should be large enough to store another string!
    char greet2[] = "there!";

    printf("%lu\n", sizeof(greetings));   // Outputs 13 \0 included
    printf("%lu\n", sizeof(greetings2));  // Outputs 13 \0 included

    
    printf("%lu\n", strlen(alphabet));   // 26
    printf("%lu\n", sizeof(alphabet));   // 50

    strcat(greet1, greet2);//result is stored in greet1;

    printf("%s\n", greet1);

    char str1[20] = "hi";
    char str2[19];

    strcpy(str2, str1);

    printf("%s",str2);
}

