#include <stdio.h>

// dizi elemanlarına yeni değer ataması yapma
main() {
  int beyza[5] = {19, 10, 8, 17, 9};
  int i;

  beyza[2] = 18;

  for (i = 0; i < 5; i++) {
    printf("%d\n", beyza[i]);
  }

  return 0;
}