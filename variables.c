#include <stdio.h>

int main(){
    int num;
    float gpa;
    char score;
    double lnum = 1.3482357582735482;
    char mytext[] = "hello";

    const int BIRTHDATE = 21; //const var that cant be changed later;

    num = 21;
    gpa = 0.1; 
    score = 'A';
    printf("%d%f%c\n",num, gpa, score);
    printf("%.10lf\n", lnum);// printing double type. (.10) means you can specify the amount of number to show after the decimal point.
    printf("%s\n", mytext);//printing strings
    printf("%d\n", gpa == 0.1);
}