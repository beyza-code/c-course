#include <stdio.h>
#include <stdlib.h>

// Her sayının kendinden önceki sayı ile toplanması sonucu oluşan sayı dizisine
// Fibonacci dizisi adı verilmektedir. Buna göre klavyeden ka adet fibonacci
// sayısı üretileceği bilgisini girilerek sayıların üretilmesini sağlayan C
// programını yazınız.

void fibonacci(int n) {
  int first;
  int second;
  int after;
  int i;

  printf("The fibonacci numbers will be created:\n");
  for (i = 0; i < n; i++) {
    if (i <= 1) {
      after = i;
    } else {
      after = first + second;
      first = second;
      second = after;
    }
    printf("%d\n", after);
  }
}

int main() {

  int number;
  printf("How many Fibonacci number will be created?\n");
  scanf("%d\n", &number);
  fibonacci(number);

  return 0;
}