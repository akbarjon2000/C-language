#include <stdio.h>
#include <string.h>

int str_cmp(char *, char *);

int main(){
    char *str1 = "Baskem";
    char *str2 = "Basket";

    int ret = str_cmp(str1, str2);
    printf("%d", *(str1+1));
    if(ret == 0)
        printf("the strings are identical\n");
    else if(ret > 0)
        printf("str1 comes after str2");
    else printf("str1 comes before str2");

    return 0;

}

int str_cmp(char *str1, char *str2){
while(*str1 != '\0' && *str2 !='\0'){
    if(*str1 != *str2){
        return *str1 - *str2;
    }
    str1++;
    str2++;
}
return 0;
}