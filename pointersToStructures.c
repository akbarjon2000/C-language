#include <stdio.h>
struct book{
    char title[100];
    double price;
    int pages;
};
int main(){
    struct book book1 = {"Hadis", 501.500, 1000};
    struct book *strcptr = &book1;
    printf("%s", strcptr -> title);
    printf("%s", book1.title);
    return 0;
};