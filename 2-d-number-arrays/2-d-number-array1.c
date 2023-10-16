#include <stdio.h>
#include <stdlib.h>
#define CAN 4
// 10 tane integer tipinde değer tutan bir dizi tanımlayınız
// Dizinin tüm elemanlarını kullanıcının girmesini isteyiniz
// Dizinin en büyük ve en küçük elemanlarını bulup ekrana bastırınız. For
// yapısını kullanınız

int main() {

  int i;
  int max, min;
  int serie[CAN];
  printf("Please enter %d much value\n", CAN);
  for (i = 0; i < CAN; i++) {
    scanf("%d", &serie[i]);
  }
  max = min = serie[0];
  for (i = 1; i < CAN; i++) {
    if (serie[i] > max) {
      max = serie[i];
    }
    if (serie[i < min]) {
      min = serie[i];
    }
  }
  printf("max=%d, min=%d", max, min);

  return 0;
}