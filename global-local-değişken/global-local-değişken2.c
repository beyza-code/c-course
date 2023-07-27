#include <stdio.h>
#include <stdlib.h>

// Fonksiyonlarda Global-Local Değişken

void beyza() {
  int x = 3;
  printf("%d", x);
}

int main() {

  int x = 2;
  printf("%d\n", x);
  beyza();

  return 0;
}