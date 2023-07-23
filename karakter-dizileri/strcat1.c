#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  char bos[100];
  strcpy(bos, "benim");

  strcat(bos, " adım");
  strcat(bos, " Beyza Algüllü");

  printf("%s", bos);

  return 0;
}