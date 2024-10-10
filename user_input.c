#include <stdio.h>
#include <string.h>
int main(){
    int num;
    char fullName[30];
    printf("type a number:");
    scanf("%d", &num);

    printf("your number is: %d\n", num);

    printf("type your full name:\n");
    fgets(fullName, sizeof(fullName), stdin);
    printf("your full name is:%s", fullName);
}