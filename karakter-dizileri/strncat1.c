#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {

  char can[100];
  char canan[100];
  int a;

  printf("Please enter a writing\n");
  scanf("%s", can);
  
  printf("Please enter the second writing\n");
  scanf("%s", canan);
  
  printf("How many characters would you like to add to the end of the first writing?\n");
  scanf("%d",&a);
  
  printf("Before collecting %s\n", can);
  
  printf("After collecting %s\n", strncat(can, canan, a));

  return 0;
}