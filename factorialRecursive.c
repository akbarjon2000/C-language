#include <stdio.h>

int factorial(int a);

int main(){
    int a = 5;
    int f = factorial(a);
     printf("a: %d\n", a);
     printf("factorial: %d", f);
     return 0;
}

int factorial(int a){
  
    if(a <= 1){
        return 1;
    }
    return a * factorial(a-1);
    
}