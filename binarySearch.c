#include <stdio.h>

int binarySearch(int array[], int start, int end, int element){
    if(end >= start){
        int mid  = start +(end-start)/2;
        if(array[mid] == element)
            return mid;
        if (array[mid] > element)
            return binarySearch(array, start, mid-1, element);
        return binarySearch(array, mid+1, end, element);
    };
    return -1;
}

int main(){
    int array[] = {0,1,2,4,5,6, 7, 9};
    int element = 3;
    int start = 0;
    int end = 6;
    int index = binarySearch(array, start, end, element);

    if (index == -1){
        printf("the element is not found");
    }else{
        printf("%d", index);
    }
    return index;
}