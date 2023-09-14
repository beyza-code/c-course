#include <stdio.h>
#include <stdlib.h>

// 1'den 10'a kadar her bir sayının faktoriyelini fonksiyon kullanarak
// hesaplayan ve sonuçları ekrana listeleyen C kodunu giriniz.

int factorial(int n) {
  int i;
  int result = 1;
  for (i = 1; i <= n; i++) {
    result = result * i;
  }
  return result;
}

int main() {

  int i;
  for (i = 1; i <= 10; i++) {
    printf("%d!=%d\n", i, factorial(i));
  }

  return 0;
}