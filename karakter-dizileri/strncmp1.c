#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  int result;
  char can[15] = "abcdef";
  char canan[15] = "ABCDEF";
  result = strncmp(can, canan,4);

  if (result < 0) {
    printf("Can smaller than Canan");
  } else if (result > 0) {
    printf("Can is bigger than Canan");
  } else {
    printf("They are equal to eachother");
  }

  return 0;
}