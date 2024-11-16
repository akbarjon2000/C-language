#include <stdio.h>
#include <unistd.h>

void EXECLE();
void EXECL();
void EXECLP();
void EXECV();

int main(){

    EXECV();
    EXECLE();
    EXECLP();
    EXECL();
    printf("end of function");
    return 0;
}

void EXECL(){

    char *file = "/usr/bin/cal";
    char *month = "11";
    char *year = "2024";


    execl(file, file, month, year, NULL);
}

void EXECLP(){
    char *file = "echo";
    char *arg = "Hello world";

    execlp(file, file, arg, NULL);
}

void EXECLE(){
    char *file = "/bin/bash";
    char *arg1 = "-c";
    char *arg2 = "echo $ENV1 $ENV2!";

    char *const env[] = {"ENV1=HELLO", "ENV2=WORLD", NULL};
    execle(file, file, arg1, arg2, NULL, env);

}

void EXECV(){
    char *file = "/bin/echo";
    char *const vector[] = {"/bin/echo", "execv output", NULL};

    execv(file, vector);
}