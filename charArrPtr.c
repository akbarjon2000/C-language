#include <stdio.h>
#include <string.h>

int main(){
    char *arr[2] = {"Hello", "World"};
    
    for(int i = 0; i < 2; i++){
        printf("%s ", arr[i]);
    }
    printf("\n %d ", sizeof(int *));
}