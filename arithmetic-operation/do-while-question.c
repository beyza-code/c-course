#include <stdio.h>
#include <stdlib.h>

// Kullanıcıdan bir "n" değerini girmesini isteyin
// 1 + 1/2 + 1/3 + ... + 1/n değerini hesaplayınız

int main() {
  int n;
  int i;
  float conclusion = 0.0; // Başlangıç değeri atanmalı

  do {
    printf("How many n: ");
    scanf("%d", &n);
  } while (n < 1);

  for (i = 1; i <= n; i++) {
    conclusion += (float)1 / i;
  }

  printf("Conclusion : %f", conclusion);

  return 0;
}