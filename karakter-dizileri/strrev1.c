#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  char beyza[100];
  printf("Please enter a text\n");
  scanf("%s", &beyza);

  printf("The statement you entered %s\n", beyza);
  printf("The inverted version of the statement you entered %s\n",strrev(beyza));
  
  return 0;
}