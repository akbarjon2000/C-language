#include <stdio.h>

int ptrStringArray();

int main(){
    char languages[5][12] = {"Python", "Java", "C", "C++", "JavaScript"} ;
    int i;

    for (i = 0; i < 5; i++){
        printf("%s ", languages[i]);
    }

    printf("\n");
    ptrStringArray();
    
    return 0;    
}

int ptrStringArray(){
    char *langs[5] = { "Python", "Java", "C", "C++", "JavaScript"};
    for(int i = 0; i < 5; i++){
        printf("%s ", langs[i]);
    }
    return 0;
}