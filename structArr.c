#include <stdio.h>
#include <string.h>

int StructArrPtr();

typedef struct{
    char title[10];
    int pages;
    float price;
} Book;

int main(){
    Book books[3];
    strcpy(books[0].title, "Book1");
    books[0].price = 150.4;
    books[0].pages = 345;

    strcpy(books[1].title, "Book2");
    books[1].price = 140.4;
    books[1].pages = 445;

    strcpy(books[2].title, "Book3");
    books[2].price = 156.4;
    books[2].pages = 245;

    int i;

    for(i = 0; i < 3; i++){
        printf("%s is %f $ and %d pages \n", books[i].title, books[i].price, books[i].pages);
    }

    StructArrPtr();
}

int StructArrPtr(){
    Book books[3] = {
        {"Alisher N", .pages = 200, .price = 349.4},
        {"Boburnoma", 345, 428.3},
        {"Namangon", 347, 324.4}
    };

    Book *ptr = books;

    int i;
    (ptr+1)->pages = 10000;
    for(i = 0; i<3; i++){
        printf("%s is %f $ and %d pages \n", ptr->title, ptr->price, ptr->pages);
        ptr++;
    }
    return 0;
}