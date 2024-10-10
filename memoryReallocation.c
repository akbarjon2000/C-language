#include <stdio.h>
#include <stdlib.h>

int main(){
    int *ptr1, *ptr2, size;
    size = 4;
    ptr1 = malloc(size);

    printf("%d bytes are allocated in address %p\n", size, ptr1);

    //resize;

    size = 6 * sizeof(*ptr1);
    ptr2 = realloc(ptr1, size);
    if (ptr2 == NULL){//check if the reallocation is successfull
        printf("failed to reallocate more memory\n");
    }else{
       printf("%d bytes are reallocated at the address %p\n", size, ptr2);
       ptr1 = ptr2; //update the ptr1 to point to the newly allocated memory;
    }
    free(ptr1);
    ptr1 = NULL;
    
}