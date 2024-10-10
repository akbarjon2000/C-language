#include <stdio.h>
enum Level{
        LOW, // by default Low = 0
        MEDIUM,//1
        HIGH//2
};
enum Steps{
    step1 = 10,
    step2 = 20,
    step3 = 30
};
int main(){
    enum Level myVar = MEDIUM;
    enum Steps myStep = step1;


    printf("%d\n", myVar);
    printf("%d\n", step1);
    return 0;

}