#include <stdio.h>
#include <stdlib.h>

int memAllocate();

int main(){
    int *ptr = NULL;

    if(ptr == NULL){//check it before dereferencing
        printf("pointer is NULL\n");
    }else{
        printf("ptr: %u", ptr);
    }
    // printf("value at ptr:%d", *ptr);
    memAllocate();
    return 0;
}

int memAllocate(){
    int *ptr2 = (int *)malloc(sizeof(int));

    if(ptr2 ==NULL){
        printf("Memory allocation failed");
        exit(0);
    }else{
        printf("Memory allocated succesfully");
    }
    return 0;

}