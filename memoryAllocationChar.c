#include <stdio.h>
#include <stdlib.h>

int main() {
  int *ptr1 = malloc(4); // the data in this allocated memory is unpredictable. before accessing the memory make sure to write something to the memory
  char *ptr2 = (char*) ptr1;
  ptr1[0] = 1684234849;
  printf("%d is %c %c %c %c\n", *ptr1, ptr2[0], ptr2[1], ptr2[2], ptr2[3]);
  free(ptr1);
  ptr1 = NULL;
  return 0;
}

