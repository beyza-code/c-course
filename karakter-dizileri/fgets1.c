#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

  char name[30];
  printf("Please enter your name\n");
  fgets(name, sizeof(name), stdin);
  printf("%s", name);

  return 0;
}