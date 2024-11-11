#include <stdio.h>
void readFile();
void readFile2();
void openFile();
int binaryWrite();
int binaryRead();
int Rename();

int main(){
//    readFile();
// readFile2();
    // openFile();
    // binaryWrite();
    // binaryRead();
    Rename();
   return 0;
}
void readFile(){
    FILE *fptr;
    char myString[100];
    fptr = fopen("/Users/akbarjon/C Language/example.txt", "r");

    fgets(myString, 100, fptr);

    printf("coming from myString%s\n", myString);

    fclose(fptr);
}

//read using fscanf():

void readFile2(){
    FILE *file3;
    int a;
    float p;
    char *s;

    file3 = fopen("./file3.txt", "r");

    while(fscanf(file3, "%d %f %s", &a, &p, s) != EOF)
    printf("Name: %s, Age: %d, Percent: %f \n", s, a, p );
    fclose(file3);

    
}

void append(){
    FILE *fptr;

   fptr = fopen("/Users/akbarjon/C Language/example.txt", "a");
   fprintf(fptr, "Hello Abdulloh!");
   fclose(fptr);
}
void open(){
    FILE *fptr;

   fptr = fopen("/Users/akbarjon/C Language/example.txt", "w");
   fprintf(fptr, "Hello there!");
   fclose(fptr);
}
void create(char name[]){
    FILE *fptr;

    fptr = fopen(name, "w");
    fclose(fptr);
}

void openFile(){
    FILE *file;
    char str[255];
    char ch;
    file = fopen("/Users/akbarjon/C Language/file3.txt", "r");
    // fprintf(file,"My name is %s\n", "Abdulloh");
    // while((ch = fgetc(file))!= EOF){
    //     printf("%c", ch);
    // }
    printf("\n");
    while(fgets(str, 255, file) != NULL){
        printf("%s", str);
    }
    fclose(file);
    
}

struct employee {
   int age;
   float percent;
   char name[10];
};
int binaryWrite(){
   FILE *fp;
   struct employee e[] = {
      {25, 65.5, "Ravi"}, 
      {21, 75.5, "Roshan"}, 
      {24, 60.5, "Reena"}
   };

   char *string;

   fp = fopen("file4.dat", "wb");
   if(fp == NULL){
    puts("File can not be opened!");
    return 1;
   }

   for (int i = 0; i < 3; i++) {
      fwrite(&e[i], sizeof (struct employee), 1, fp);
   }

   fclose(fp);
   
   return 0;

}

int binaryRead(){
    struct employee e[3];
    FILE *file;
    file = fopen("/Users/akbarjon/C Language/file4.dat", "rb");

    if(file == NULL){
        puts("File can not be opened!");
        return 1;
    }

    fread(e, sizeof(struct employee), 3, file);
    int i;
    for(i = 0; i< 3; i++){
        printf("Name: %s, age: %d, percent:%f \n", e[i].name, e[i].age, e[i].percent);
    }
    return 0;
}

int Rename(){
    if(rename("file3.txt", "file4.txt") == 0){
        printf("renamed successfully");
    }else{
        perror("errrrror occured!");
    }
    return 0;
}