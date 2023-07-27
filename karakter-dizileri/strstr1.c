#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {

  char beyza[100] = "We are learning C";
  char *sub;
  sub = strstr(beyza ,"learn");
  printf("\nNew string after searching: %s", sub);
  return 0;
}