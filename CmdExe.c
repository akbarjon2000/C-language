#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char *cmd;
    cmd = (char *)malloc(100* sizeof(char));
    strcpy(cmd, "ls /Users/akbarjon/'C Language'/*.c");
    system(cmd);

    return 0;
}