#include <stdio.h>
#include <string.h>
struct myStructure{
    int num;
    char letter;
    char str[100];
};

int main(){
    struct myStructure s1;
    struct myStructure s2 = {12, 'b', "second"};
    struct myStructure s3;
    s3 = s2;
    
    s1.num = 21;
    s1.letter = 'A';
    strcpy(s1.str, "Some text");

    printf("%c\n", s1.letter);
    printf("%s\n", s1.str);
    printf("%d, %c, %s", s2.num, s2.letter, s2.str);
}