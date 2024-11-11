#include <stdio.h>

int Greeting();
int GetsInput();
int ScanfInput();
int PrintString();

int main(){
    
    PrintString();

    // ScanfInput();

    // GetsInput();
    
    // Greeting();

    // char word[6];
    // int i;
    // for (i = 0; i < 6; i++){
    //     scanf("%c", &word[i]);
    // };
    // word[i] = '\0';
    // printf("%s", word);
    return 0;
}
//scanf function for inputting only one solid word
int Greeting(){
    char greeting[10];
    printf("Enter the string:\n");
    scanf("%s", greeting);
    printf("%s", greeting);
    return 0;
}
// fgets function for getting multiple words fgets(char name[], size, stream);
int GetsInput(){
    char greeting[20];
    fgets(greeting, sizeof(greeting), stdin);
    printf("%s", greeting);
    return 0;
}

// input string with Scanf function to input multiple words. scanf("%[^\n]s")
int ScanfInput(){
    char greeting[20];
    scanf("%[^\n]s", greeting);
    printf("you entered: \n %s", greeting);
    return 0;
}

// stringn the whole string without printf(). fputs(string, stream);

int PrintString(){
    char name[] = "Akbarjon";
    printf("your name is ");
    fputs(name, stdout);
    return 0;
}