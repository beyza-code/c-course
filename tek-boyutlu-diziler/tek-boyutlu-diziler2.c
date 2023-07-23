#include <stdio.h>

int main() {

  int beyza[10];
  int i;
  for (i = 0; i < 10; i++) {
    beyza[i] = 2 * i;
  }
  for (i = 0; i < 10; i++) {
    printf("%d\n", beyza[i]);
  }

  return 0;
}