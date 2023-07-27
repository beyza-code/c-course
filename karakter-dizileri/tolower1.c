#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {

  char beyza[100];
  fgets(beyza, sizeof(beyza), stdin);

  printf("The text you entered: %s\n", beyza);

  for (int i = 0; beyza[i] != '\0'; i++) {
    beyza[i] = tolower(beyza[i]);
  }

  printf("The converted version of the expression you entered into lowercase letters: %s\n", beyza);
  return 0;
}