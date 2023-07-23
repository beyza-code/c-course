#include <stdio.h>
#include <stdlib.h>

int main() {

  char user[100];
  printf("Please enter a string of characters\n");
  scanf("%s", &user);
  printf("\n");
  printf("%s", user);

  return 0;
}