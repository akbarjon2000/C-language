#include <stdio.h>

struct Book{
    char title[10];
    int pages;
    double price;
    struct Author{
        char firstName[10];
        char lastName[10];
    } auth1;
};

int main(){
    struct Book myBook = {"Qulub", 999, 0.1,{"Imom", "G'azzoliy"}};
    struct Book *bookPtr = &myBook;

    printf("%s\n", bookPtr->title); 
    printf("%s\n", myBook.title);
    printf("The author is %s %s\n", myBook.auth1.firstName, myBook.auth1.lastName);
    printf("The author is %s %s\n", bookPtr -> auth1.firstName, bookPtr -> auth1.lastName);
    return 0;
}