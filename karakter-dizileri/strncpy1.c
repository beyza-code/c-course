#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  char can[] = "Benim adım Beyza Algüllü";
  char canan[100]="";
  strncpy(canan, can,5);
  printf("%s", canan);

  return 0;
}