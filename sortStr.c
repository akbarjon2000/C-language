#include <stdio.h>
#include <string.h>

int main(){
    char *langs[] = {"Python", "Java", "C", "C++", "JavaScript"};
    int i,j;
    char *temp;
    
    for (i = 0; i < 4; i++){
        for(j = i+1; j < 5; j++){
            if(strcmp(langs[i], langs[j]) > 0){
                temp = langs[i];
                langs[i] = langs[j];
                langs[j] = temp;
            }
        }
    }

    for (i = 0; i < 5; i++){
        printf("%s ", langs[i]);
    }
    return 0;
}